/*Greatest between two numbers*/

#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("Enter three numbers: ");
    scanf("%d%d", &a, &b);

    printf("%d is the largest number", (a > b ? a : b));

    return 0;
}
