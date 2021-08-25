/*GCD*/
#include <stdio.h>
main()
{

    int a, b, i;
    printf("Enter the 2 no : ");
    scanf("%d%d", &a, &b);
    for (i = a > b ? b : a; i > 0; i--)
        if (a % i == 0 && b % i == 0)
            break;

    printf("GCD = %d\n", i);
}
