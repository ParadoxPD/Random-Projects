
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

int fact(int n) //return_type func.name(parameters)
{
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}
