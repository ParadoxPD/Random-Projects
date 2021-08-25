// WAP to transpose a matrix of size 4x5 input to the matrix and display the elements using fnc

#include <stdio.h>
#define ROW 2
#define COL 3
void input(int [][COL]);
void display(int [][COL]);
void transpose(int [][COL]);

int main()
{
    int i, key, a[ROW][COL];

    input(a);
    display(a);

    printf("Matrix after transpose : \n");
    transpose(a);

    return 0;
}

void input(int a[][COL])
{
    int i,j;
    printf("Enter the Elements: \n");
    for (i = 0; i < ROW; i++)
    {


        for(j=0; j<COL; j++)
        {
            printf("Enter %d element of %d row : ",j,i);
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[][COL])
{
    int i,j;
    printf("The Matrix: \n");
    for (i = 0; i < ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void transpose(int a[][COL])
{

    int i,j,temp[COL][ROW];
    for (i = 0; i < ROW; i++)
        for(j=0; j<COL; j++)
            temp[j][i]=a[i][j];

    printf("The Matrix: \n");
    for (i = 0; i < COL; i++)
    {
        for(j=0; j<ROW; j++)
            printf("%d\t", temp[i][j]);
        printf("\n");
    }

}
