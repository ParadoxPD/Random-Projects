
#include <stdio.h>



int getMin(int A[] , int N)
{
    int res =A[0];

    for(int i=1;i<N;i++){
        res=res-A[i];
    }
    return res;

}

int main(void)
{
    int  T = 0,N=0;
    scanf("%d",&T);
    if(T>0 && T<21)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {

            scanf("%d",&N);
            int A[N];
            for(int j=0;j<N;j++)
            scanf("%d",&A[j]);

            resA[i]=getMin(A,N);


        }

        for(int i =0; i<T; i++)
            printf("%d\n",resA[i]);
    }
    return 0;
}


