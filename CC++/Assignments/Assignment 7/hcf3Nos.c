#include <stdio.h>
int main()
{

    int a, b, c, i;
    printf("Enter the 3 no : ");
    scanf("%d%d%d", &a, &b, &c);
    i = a < b ? (a < c ? a : c) : (b < c ? b : c);
    while (i > 0)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
            break;
        i--;
    }
    printf("%d\n", i);
}
