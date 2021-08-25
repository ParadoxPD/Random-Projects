/*Find Symmetrical Matrix*/

#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, counter = 0;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &r);
    printf("Enter the elements of the matrix : \n");

    for (i = 0; i < r; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
            if (a[i][j] != a[j][i])
                counter++;
    }

    if (counter == 0)
        printf("Symmetrical Matrix");
    else
        printf("Not a Symmetrical Matrix");

    return 0;
}
