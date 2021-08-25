#include <stdio.h>


int getArray(char s[],int N)
{
    int a[N];
    int c=1;
    a[0] = s[0] == 'c' ?-1:1;
    for(int i=1; s[i]!='\0'; i++)
    {
        if(s[i] == 32 )
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
            int N =0;
            scanf("%d",&N);
            char s[400];
            scanf(" %[^\n]",s);
            resA[i] = getArray(s,N);


        }


        for(int i =0; i<T; i++)
            printf("%s\n",resA[i]?"Yes":"No");
    }
    return 0;
}


