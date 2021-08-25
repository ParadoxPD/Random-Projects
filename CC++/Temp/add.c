/* WAP to add two matrix of size 4x5 input to the matrix and display the elements using fnc*/

#include <stdio.h>
#define COL 10

void input(int[][COL], int, int);
void display(int[][COL], int, int);
void add(int[][COL], int[][COL], int, int);

int main()
{
    int r1, r2, c1, c2;
    printf("COLUMN SHOUD BE LESS THAN 10\n");

    printf("Enter Row of 1st matrix : ");
    scanf("%d", &r1);
    printf("Enter Column of 1st matrix : ");
    scanf("%d", &c1);
    printf("Enter Row of 2st matrix : ");
    scanf("%d", &r2);
    printf("Enter Column of 2st matrix : ");
    scanf("%d", &c2);

    if (r1 == r2 && c1 == c2 && c1 <= 10)
    {
        int A[r1][c1], B[r2][c2];

        input(A, r1, c1);
        display(A, r1, c1);
        input(B, r2, c2);
        display(B, r2, c2);

        printf("Matrix after adding : \n");
        add(A, B, r1, c1);
    }

    else
        printf("Size Not same");

    return 0;
}

void input(int a[][COL], int r, int c)
{
    int i, j;
    printf("Enter the Elements: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
}

void display(int a[][COL], int r, int c)
{
    int i, j;
    printf("The Matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void add(int a[][COL], int b[][COL], int r, int c)
{

    int i, j, temp[r][COL];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            temp[i][j] = a[i][j] + b[i][j];

    display(temp, r, c);
}
