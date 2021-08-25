#include <stdio.h>
main()
{

    char c = 'A';
    int i, j, row, k = 0;
    printf("Enter the no of rows:");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", c + k);
        }
        printf("\n");
        k++;
    }
}