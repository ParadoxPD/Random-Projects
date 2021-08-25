/*Prime*/

#include <stdio.h>

int prime(int);
int main()
{

    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    if (prime(N))
        printf("Prime Number");
    else
        printf("Not a Prime number");
    return 0;
}

int prime(int n)
{
    int i, c = 0;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            c++;
    return (c == 0);
}
