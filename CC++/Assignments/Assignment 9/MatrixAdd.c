/*Addition of two matrix*/

#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], sum[20][20];
    int i, j, r, c;
    printf("Enter the row of matrix : ");
    scanf("%d", &r);
    printf("Enter the column of matrix : ");
    scanf("%d", &c);

    printf("Enter the elements of first matrix :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix :\n");

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("The new matrix is :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }
    return 0;
}
