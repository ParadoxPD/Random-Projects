/*Sum of each row*/

#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, c, sum = 0;
    printf("Enter the row of matrix : ");
    scanf("%d", &r);
    printf("Enter the column of matrix : ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nThe row sum of the given matrix is\n");
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        printf("%d\n", sum);
    }

    return 0;
}
