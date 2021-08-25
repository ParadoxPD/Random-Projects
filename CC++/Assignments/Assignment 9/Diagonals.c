/*Diagonal elements and it's sum*/

#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, sum = 0;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &r);

    printf("Enter the elements of the matrix : \n");

    for (i = 0; i < r; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    printf("\nThe given matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
                printf("%d\t", a[i][j]);
            }
            else
                printf(" \t");
        }
        printf("\n");
    }

    printf("Sum of Diagonal Elements : %d", sum);

    return 0;
}
