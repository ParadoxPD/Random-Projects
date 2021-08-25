
#include <stdio.h>



int isWinner(int n,int a,int b,int k)
{
    int c=0;
    for(int i=1;i<=n;i++){
        if((i%a == 0&& i%b!=0) ||(i%b == 0&& i%a!=0) )
            c++;
    }
return c>=k;
}

int main(void)
{
    int  T = 0;
    scanf("%d",&T);
    if(T>0 && T<16)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            int A,B,N,K;
            scanf("%d",&N);
            scanf("%d",&A);
            scanf("%d",&B);
            scanf("%d",&K);

            resA[i]=isWinner(N,A,B,K);


        }

        for(int i =0; i<T; i++)
            printf("%s\n",resA[i]?"Win":"Lose");
    }
    return 0;
}


