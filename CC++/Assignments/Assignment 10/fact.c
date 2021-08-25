/*Factorial*/

#include <stdio.h>

int fact(int);
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("Answer : %d", fact(N));

    return 0;
}

int fact(int n)
{
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}
