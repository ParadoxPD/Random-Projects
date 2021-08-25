//Sum and average of all elements of arr//
#include<stdio.h>
#define size 5
void Input(int []);
void Display(int []);
void sum(int []);
void avg(int []);
int main()
{
    int a[size],Sum,Average;
    Input(a);
    Display(a);
    Sum=sum(a);
    printf("sum=%d\n",sum);
    Average=avg(a);
    printf("Average=%d\n",Average);
    return 0;
}
void Input (int a[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter elements\n");
        scanf("%d",&a[i]);
    }
}
void Display (int a[])
{
    int i;
    printf("Elements of the array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",&a[i]);
    }
    printf("\n");
}
int sum (int a[])
{
    int i,x=0;
    for(i=0;i<size;i++)
    {
        x=x+a[i];
    }
    return x;
}
int avg (int a[])
{
    int i,x=0,b=0;
    for(i=0;i<size;i++)
    {
        x=x+a[i];
    }
    b=(x/size);
    return b;
}
