/*Fibonacci*/

#include <stdio.h>

void fibo(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fibo(num);
}

void fibo(int range)
{
    int a = 0, b = 1, c, i = 1;
    while (i <= range)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}
