
#include <stdio.h>


int check(char s[],int N)
{
    int a[N];
    int c=1;
    a[0] = s[0] == 'c' ?-1:1;
    for(int i=1; s[i]!='\0'; i++)
    {
        if(s[i] == 32  && s[i+1]!='\0')
        {
            if( s[i+1] == 'c')
                a[c] =-1;
            else
                a[c]=1;
            c++;
        }
    }
    int res =a[0];
    for(int i=1; i<N; i++)
    {
        res+=a[i];
        if(res<0)
            return 0;
    }
    if(res <0)
        return 0;
    return 1;

}
int main(void)
{
    int  T = 0;
    scanf("%d",&T);
    if(T>0 && T<51)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            int N =0,j=0;
            scanf("%d",&N);
            char str[400];
            scanf(" %[^\n]",&str);
            resA[i] = check(str,N);


        }


        for(int i =0; i<T; i++)
            printf("%s\n",resA[i]?"YES":"NO");
    }
    return 0;
}


