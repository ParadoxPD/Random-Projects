/*Smallest between two numbers*/

#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("%d is the smaller number\n", (a > b ? b : a));

    return 0;
}
