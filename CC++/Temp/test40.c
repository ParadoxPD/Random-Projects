
#include<stdio.h>
#define size 5
void QUICK_SORT(int[],int,int);
int PARTICITION(int[],int,int);
void TRAVERSE(int[]);

int main()
{
    int a[size],i,p,r;
    p=0;
    r=size-1;
    printf("ENTER THE ELEMENTS: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    QUICK_SORT(a,p,r);
    TRAVERSE(a);
}

void QUICK_SORT(int a[],int p,int r)
{

    int q;
    if(p<r)
    {
        q=PARTICITION(a,p,r);
        QUICK_SORT(a,p,q-1);
        QUICK_SORT(a,q+1,r);
    }
}

int PARTICITION(int a[],int p,int r)
{

    int pivot,i,j,temp;
    pivot=a[r];
    i=p-1;
    j=p;
    while(j<r)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        j++;
    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return i+1;
}

void TRAVERSE(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
}
