/*Smallest between two numbers*/

#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("%d is the smallest number\n", (a < b ? (a < c ? a : c) : (b < c ? b : c)));

    return 0;
}
