/*printing of hello in a pattern
*/
#include <stdio.h>
main()
{
    int i, j;
    char a[] = "Hello";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%c ", a[j]);
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
            printf("%c ", a[j]);
        printf("\n");
    }
}