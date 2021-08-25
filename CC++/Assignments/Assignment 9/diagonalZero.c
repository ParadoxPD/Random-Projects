/*Diagonal elements are 0 and other elements are 1*/

#include <stdio.h>
int main()
{
    int a[10][10], i, j, r;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }

    printf("\nThe given matrix is\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < r; ++j)
            printf("%d\t", a[i][j]);

        printf("\n");
    }

    return 0;
}
