//Enter a 3 digit no and calc the sum of digits and also show the individual digits

#include <stdio.h>

int main()
{

    int n;
    printf("Enter a 3 digit number : ");
    scanf("%d", &n);

    int d1 = n % 10;
    n /= 10;
    int d2 = n % 10;
    n /= 10;
    int d3 = n % 10;
    n /= 10;
    int s = d1 + d2 + d3;
    printf("Sum of digits : %d\n", s);
    printf("The digits are : %d %d and %d", d3, d2, d1);

    return 0;
}
