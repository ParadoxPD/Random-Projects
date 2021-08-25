
// WAP to declare a matrix of size 4×5 input to the matrix and display the elements using fnc

#include <stdio.h>
#define ROW 4
#define COL 5
void input(int [][COL]);
void display(int [][COL]);

int main()
{
    int i, key, a[ROW][COL];

    input(a);
    display(a);

    return 0;
}

void input(int a[][COL])
{
    int i,j;
    printf("Enter the Elements: \n");
    for (i = 0; i < ROW; i++)
        for(j=0; j<COL; j++)
            scanf("%d", &a[i][j]);
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

