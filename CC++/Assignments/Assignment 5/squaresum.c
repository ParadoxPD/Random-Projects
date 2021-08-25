/*Sum of Squares*/

#include <stdio.h>
int main()
{

    int N, i, sum = 0;
    i = 1;
    printf("Enter a number : ");
    scanf("%d", &N);
    while (i <= N)
    {
        sum = sum + i * i;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
