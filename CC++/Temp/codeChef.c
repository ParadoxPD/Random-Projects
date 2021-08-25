
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
    int  T = 0,A=0,B=0;
    scanf("%d",&T);
    if(T>0 && T<21)
    {

        int resA[T];
        for(int i =0; i<T; i++)
        {
            scanf("%d",&A);
            scanf("%d",&B);

            resA[i]=NumberOfMatches(A+B);


        }

        for(int i =0; i<T; i++)
            printf("%d\n",resA[i]);
    }
    return 0;
}

