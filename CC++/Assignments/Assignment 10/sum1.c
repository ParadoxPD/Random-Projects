/*Sum = 1+ ½! + 1/3! + …..1/n!*/

#include <stdio.h>

float sum(int);
int fact(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum = %f", sum(n));
}

float sum(int n)
{
    int i;
    float res = 0;
    for (i = 1; i <= n; i++)
        res += 1.0 / fact(i);

    return res;
}

int fact(int n)
{
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}
