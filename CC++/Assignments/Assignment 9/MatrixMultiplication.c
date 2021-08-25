/*Matrix Multiplication*/

#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter the row of 1st matrix : ");
    scanf("%d", &r1);
    printf("Enter the column of 1st matrix : ");
    scanf("%d", &c1);
    printf("Enter the row of 2nd matrix : ");
    scanf("%d", &r2);
    printf("Enter the column of 2nd matrix : ");
    scanf("%d", &c2);
    if (c1 == r2)
    {
        printf("Enter the elements of 1st matrix :\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);

        printf("Enter the elements of 2nd matrix :\n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);

        printf("The new matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                    mul[i][j] += a[i][k] * b[k][j];
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
                printf("%d\t", mul[i][j]);
            printf("\n");
        }
    }
    else
        printf("Not Possible");
    return 0;
}
