/*Perfect Number*/

#include <stdio.h>

int main()
{
    int i, N, sum = 0, j;
    printf("Enter a number :");
    scanf("%d", &N);
    printf("All Perfect Numbers upto %d:\n", N);
    for (i = 6; i <= N; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
            if (i % j == 0)
                sum += j;

        if (sum == i)
            printf("%d\t", i);
    }

    return 0;
}
