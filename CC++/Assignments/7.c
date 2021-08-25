//wap to take a 3 digit no and reverse it

#include <stdio.h>

int main()
{

    int n, rev;
    printf("Enter a 2 digit no : ");
    scanf("%i", &n);
    rev = (n % 10) * 10 + n / 10;
    printf("Reverse : %i\n", rev);

    return 0;
}
