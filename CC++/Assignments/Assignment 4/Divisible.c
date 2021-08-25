/*To check if number is divisible by 11 and 13*/

#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 11 == 0 && n % 13 == 0)
        printf("The Number is divisible by 11 and 13\n");
    else
        printf("The Number is not divisible by 11 and 13\n");

    return 0;
}
