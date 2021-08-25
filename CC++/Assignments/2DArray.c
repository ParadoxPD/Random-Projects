#include<stdio.h>
int main()
{
    int a[10][10],i,j,c,r;
    printf("Enter the rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("Enter the elements : \n");
    for (i = 0; i < r; i++)
    {
        printf("Enter value for %d row: ",i);
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\nThe given matrix is\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
            printf("%d\t", a[i][j]);

        printf("\n");
    }

    return 0;

}
