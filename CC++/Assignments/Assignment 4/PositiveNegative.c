/*To check if number is positive or negative*/

#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n >= 0)
        printf("The Number is positive\n");
    else
        printf("The Number is negative\n");

    return 0;
}
