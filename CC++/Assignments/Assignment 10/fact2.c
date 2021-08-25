/*Calculate Factorial using recursion*/

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

    if (n == 0)
        return 1;

    return n * fact(n - 1);
}
