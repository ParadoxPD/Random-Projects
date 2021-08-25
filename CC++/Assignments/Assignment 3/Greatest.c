/*Greatest between three numbers*/

#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, l;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    l = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("%d is the largest number\n", l);

    return 0;
}
