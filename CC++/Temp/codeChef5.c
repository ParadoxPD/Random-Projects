
#include <stdio.h>



int NumberOfMatches(int n)
{
    int Digit[] = {6,2,5,5,4,5,6,3,7,6};

    int res =0;
    while(n>0){
        res+=Digit[n%10];
        n/=10;
    }
    return res;

}

int main(void)
{
    int  T = 0;
    scanf("%d",&T);
    if(T>0 && T<11)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            int N;
            scanf("%d",&N);
            int X[N];
            int Y[N];
            for(int j =0;j<N;j++)
            {scanf("%d",&X[i]);scanf("%d",&Y[i]);}


            resA[i]=NumberOfMatches(A+B);


        }

        for(int i =0; i<T; i++)
            printf("%d\n",resA[i]);
    }
    return 0;
}

