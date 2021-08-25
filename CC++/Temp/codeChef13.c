
#include <stdio.h>

int isPossible(int n,int m, int x,int y)
{

    int alpha =n/x, beta =m/y;

    int r1 = 1+x*alpha;
    int r2 = 1+y*beta;

    if((r1==n && r2 == m) || (r1==n-1 && r2==m-1))
        return 1;
    r1 = 1+x*(alpha-1);
    r2 = 1+y*(beta-1);
    if((r1==n && r2 == m) || (r1==n-1 && r2==m-1))
        return 1;
    alpha =1;
    beta =1;
    r1 = 1+alpha;
    r2 = 1+beta;
    if((r1==n && r2 == m) || (r1==n-1 && r2==m-1))
        return 1;
    return 0;
}

int main(void)
{
    int  T = 0;
    scanf("%d",&T);
    if(T>0 && T<=1000)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            int N,M,X,Y;
            scanf("%d",&N);
            scanf("%d",&M);
            scanf("%d",&X);
            scanf("%d",&Y);

            resA[i] = isPossible(N,M,X,Y);

        }

        for(int i =0; i<T; i++)
            printf("%s\n",resA[i] ?"Chefirnemo" :"Pofik");
    }
    return 0;
}




