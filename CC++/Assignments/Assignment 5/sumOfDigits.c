/* Sum of digits */

#include <stdio.h>
int main()
{

    int N, i, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &N);
    while (N > 0)
    {
        sum = sum + N % 10;
        N /= 10;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
