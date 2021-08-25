
#include <stdio.h>


int main(void)
{
    int  N,M;
    scanf("%d",&N);
    scanf("%d",&M);
    int P[N][M];
    int A[N][M];
    for(int i =0; i<N; i++)
        for(j=0; j<M; j++)
            scanf("%d",&P[i][j]);

    for(int i =0; i<N; i++)
        for(j=0; j<M; j++)
            scanf("%d",&A[i][j]);





    return 0;
}

