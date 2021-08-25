#include<stdio.h>
#define size 4
int main()
{
    int num[size],i,j,sum;
    printf("Enter the elements =\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            sum=num[i]+num[j];

            if (sum==9)
            {
                printf("The numbers are %d and %d",num[i],num[j]);
                break;
            }
        }
    }
    return 0;
}
