#include <stdio.h>
int main()
{

    int a, b, i;
    printf("Enter the 2 no : ");
    scanf("%d%d", &a, &b);
    for (i = a > b ? a : b; i <= a * b; i++)
        if (i % a == 0 && i % b == 0)
            break;

    printf("%d\n", i);
}
