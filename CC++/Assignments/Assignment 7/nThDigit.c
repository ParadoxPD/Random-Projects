/*Nth Digit From Right*/

#include <stdio.h>
int main()
{
    int pos, N, c = 0;
    printf("Enter a number :");
    scanf("%d", &N);
    printf("Enter the position of the digit :");
    scanf("%d", &pos);
    while (N > 0)
    {
        c++;
        if (c == pos)
            printf("%d", N % 10);
        N = N / 10;
    }

    return 0;
}
