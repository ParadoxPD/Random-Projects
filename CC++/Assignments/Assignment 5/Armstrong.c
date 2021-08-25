/*Armstrong Number*/

#include <stdio.h>
#include <math.h>

int main()
{
    int N, sum = 0, M, d;
    printf("Enter a Number : ");
    scanf("%d", &N);
    M = N;
    while (N > 0)
    {
        d = N % 10;
        sum = sum + pow(d, 3);
        N = N / 10;
    }

    if (sum == M)
        printf("Armstrong Number\n");

    else
        printf("Not a Armstrong Number\n");

    return 0;
}
