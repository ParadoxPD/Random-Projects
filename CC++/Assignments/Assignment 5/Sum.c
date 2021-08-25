/*Sum of N natural numbers*/

#include <stdio.h>
int main()
{

    int N, i = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &N);

    while (i <= N)
    {

        sum = sum + i;
        i++;
    }

    printf("Sum : %d", sum);
    return 0;
}
