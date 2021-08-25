/*Calculate Power using recursion*/

#include <stdio.h>

int power(int, int);
int main()
{
    int N, P;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("Enter the Power : ");
    scanf("%d", &P);
    printf("Answer : %d", power(N, P));

    return 0;
}

int power(int n, int p)
{

    if (p == 0)
        return 1;
    return (n * power(n, p - 1));
}
