
#include <stdio.h>

int hcf(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return hcf(a-b, b);
    return hcf(a, b-a);
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
            int L,B;
            scanf("%d",&L);
            scanf("%d",&B);

            resA[i] = hcf(L,B);

        }

        for(int i =0; i<T; i++)
            printf("%d\n",resA[i]);
    }
    return 0;
}



