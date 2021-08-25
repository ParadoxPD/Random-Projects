/*Palindrome*/

#include <stdio.h>

int main()
{
    int N, d1, d2;
    printf("Enter a 3 digit number: ");
    scanf("%d", &N);
    d1 = N / 100;
    d2 = N % 10;

    if (d1 == d2)
        printf("Palindrome");

    else
        printf("Not Palindrome");

    return 0;
}
