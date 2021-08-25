//representing transpose of triplet from triplet
#include<stdio.h>
#define row 4
#define col 5

void input_sparse(int [][col]);
void display (int [][col], int , int);
void find_triplet(int [][col], int [][3]);
void find_transpose(int [][3] , int [][3]);
void dis_trip(int [][3], int ,int);

int count=0;
int main()
{
    int M[row][col] , Triplet[100][3],trans_trip[100][3];
    input_sparse(M);
    printf("The elements of the sparse matrix=\n");
    display(M , row , col);
    find_triplet(M , Triplet);
    printf("The elements of the triplet matrix=\n");
    //dis_trip(Triplet , count+1 , 3);
    find_transpose(Triplet , trans_trip);
    printf("The elements of the transpose of triplet matrix=\n");
    dis_trip(trans_trip,count+1,3);

    return 0;
}

void input_sparse(int m[][col])
{
    int i,j;\
    printf("Enter the elements=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &m[i][j]);
            if(m[i][j] != 0)
            {
                count++;
            }
        }
    }
}

void display(int m[][col],int R , int C)
{
    int i,j;
    for(i=0;i<R;i++)
    {
       for(j=0;j<C;j++)
       {
           printf("%d\t",m[i][j]);
       }
       printf("\n");
    }
}

void find_triplet(int m[][col] , int Trip[][3])
{
    int i,j,k=1;
    Trip[0][0] = row;
    Trip[0][1] = col;
    Trip[0][2] = count;
    for(i=0 ; i<row ; i++)
    {
        for(j=0;j<col;j++)
        {
            if(m[i][j] != 0)
            {
                Trip[k][0] = i;
                Trip[k][1] = j;
                Trip[k][2] = m[i][j];
                k++;
            }
        }
    }
}

void dis_trip(int trip[][3],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",trip[i][j]);
        }
        printf("\n");
    }
}

void find_transpose(int trip[][3] , int trans_trip[][3])
{
    dis_trip(trip,count+1 , 3);
    int i,j,k=1;
    trans_trip[0][0] = col;
    trans_trip[0][1] = row;
    trans_trip[0][2] = count;

    for(i=0;i<col;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(trip[j][1] == i)
            {
                trans_trip[k][0] = trip[j][1];
                trans_trip[k][1] = trip[j][0];
                trans_trip[k][2] = trip[j][2];
                k++;
            }
        }
    }

}
