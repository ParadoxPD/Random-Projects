/*WAP to check whether a number is palindrome or not.*/

#include <stdio.h>
int main()
{
    int N, rev = 0, M, d;
    printf("Enter a Number : ");
    scanf("%d", &N);
    M = N;
    while (N > 0)
    {
        d = N % 10;
        rev = rev * 10 + d;
        N = N / 10;
    }

    if (rev == M)
        printf("Palindrome Number\n");

    else
        printf("Not a Palindrome Number\n");

    return 0;
}
