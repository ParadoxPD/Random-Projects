/*e^x = 1+ x + x^2/2! +x^3/3! …..x^n/n!*/

#include <stdio.h>

float sum(int, int);
int fact(int);
float power(int, int);
int main()
{
    int n, x;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter N : ");
    scanf("%d", &n);
    printf("Sum = %f", sum(x, n));
}

float sum(int x, int n)
{
    int i;
    float res = 0;
    for (i = 0; i <= n; i++)
        res += power(x, i) / fact(i);

    return res;
}

int fact(int n)
{
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}

float power(int n, int p)
{

    int i;
    float res = 1;

    for (i = 1; i <= p; i++)
        res *= n;

    return res;
}
