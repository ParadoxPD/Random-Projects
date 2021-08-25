
#include <stdio.h>
#include <stdlib.h>


void input(int*, int);
void display(int*, int);
int eval(int*, int,int,int);
int main()
{

    int* ptr;
    int n, i,a,b;

    printf("Enter number of elements : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        input(ptr,n);
        display(ptr,n);
        printf("\nEnter a : ");
        scanf("%d",&a);
        printf("Enter b : ");
        scanf("%d",&b);
        printf("Number of elements in range :%d",eval(ptr,n,a,b));


    }

    return 0;
}


void input(int* ptr,int n)
{
    int i;
    printf("Enter the elements :\n");
    for(i=0; i<n; i++)
        scanf("%d",&ptr[i]);

}


void display(int* ptr,int n)
{
    int i;
    printf("The elements of the array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
}


int eval(int* p,int n,int a,int b)
{

    int i,count =0;
    printf("The elements in range are :\n");
    for(i=0; i<n; i++)
    {
        if(p[i] >=a && p[i] <= b)
        {
            printf("%d\t",p[i]);
            count++;
        }
    }

    return count;
}
