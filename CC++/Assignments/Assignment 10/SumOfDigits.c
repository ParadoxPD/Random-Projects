/*Calculate Sum of Digits using recursion*/

#include <stdio.h>

int sum(int);
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("Answer : %d", sum(N));

    return 0;
}

int sum(int n)
{

    if (n < 10)
        return n;

    return n % 10 + sum(n / 10);
}
