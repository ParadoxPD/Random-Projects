/*Find sum of 1st and last digit of a 4 digit number*/

#include <stdio.h>

int main()
{

    int n, s;
    printf("Enter a 4 digit number : ");
    scanf("%d", &n);

    s = n % 10 + n / 1000;
    printf("Sum of digits : %d\n", s);

    return 0;
}
