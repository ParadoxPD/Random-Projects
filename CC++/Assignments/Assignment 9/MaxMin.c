/*Minimum and maximum elements of matrix*/

#include <stdio.h>
int main()
{
    int a[20][20];
    int i, j, r, c, min, max;
    printf("Enter the row of matrix : ");
    scanf("%d", &r);
    printf("Enter the column of matrix : ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    min = a[0][0];
    max = a[0][0];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);
    return 0;
}
