/*Calculate Fibonacci using recursion*/

#include <stdio.h>

int fibo(int);
main()
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
        printf("%d ", fibo(i));
}

int fibo(int n)
{

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
