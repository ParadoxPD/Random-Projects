#include <stdio.h>



int passCheck(char s[])
{
    int len=0,small=0,large=0,digit=0,spec=0;

    int n=strlen(s);
    if(n>=10) len =1;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z') small=1;
        if(i!=0 && i!=n-1)
        {
            if(s[i]>='A' && s[i]<='Z') large=1;
            if(s[i]>='0' && s[i]<='9') digit=1;
            if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?') spec=1;
        }
    }

    if(len && small && large && digit && spec)
        return 1;

    else
        return 0;

}


int main(void)
{
    int  T = 0;
    char s[20];
    scanf("%d",&T);
    int resA[T];
    for(int i =0; i<T; i++)
    {
        scanf(" %[^\n]",s);

        resA[i]=passCheck(s);

    }

    for(int i =0; i<T; i++)
        printf("%s\n",resA[i] ?"YES":"NO");

    return 0;
}
