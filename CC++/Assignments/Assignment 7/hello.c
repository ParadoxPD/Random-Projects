
#include <stdio.h>

int main()
{
    int i, j;
    char s[] = "Hello";
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= (i <= 5 ? i : 9 - i + 1); j++)
            printf("%c ", s[j - 1]);
        printf("\n");
    }

    return 0;
}
