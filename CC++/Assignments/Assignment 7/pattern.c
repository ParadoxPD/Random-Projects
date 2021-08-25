
#include <stdio.h>

int main()
{
    int i, j, temp;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 2 * (4 - i); j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
        {
            temp = j <= i ? j : i - j % i;
            printf("%d ", temp);
        }
        printf("\n");
    }

    return 0;
}
