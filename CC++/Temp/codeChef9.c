#include <stdio.h>

int main(void)
{
    int  T = 0;
    scanf("%d",&T);
    if(T>0 && T<6)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            int N;
            scanf("%d",&N);
            int C[N][N];

            for(int j=0; j<N; j++)
                for(int k=0; k<N; k++)
                    scanf("%d",&C[j][k]);
            int P;
            scanf("%d",&P);

            int B[P][2];
            for(int j=0; j<P; j++)
                for(int k=0; k<2; k++)
                    scanf("%d",&B[j][k]);


        }

        for(int i =0; i<T; i++)
            printf("%d\n",resA[i]);
    }
    return 0;
}

