/*Triangle Pattern
Enter no. of rows:5
A
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter no. of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c ",(i+64));

        printf("\n");
    }
    return 0;
}


