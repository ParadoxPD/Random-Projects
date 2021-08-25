//MergeSort Algorithm

#include<stdio.h>
#define size 10

void mergeSort(int[],int,int);
void merge(int[],int,int,int);
void traverse(int[]);



struct x{
};

struct y{
struct x xy;
};
int  B[size];

int main()
{
    int A[size],p,r,i;
    p=0;
    r=size-1;
    printf("Enter The Elements : \n");
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    mergeSort(A,p,r);
    traverse(A);
}
void mergeSort(int a[],int p,int r)
{
    if(p<r)
    {
        int q;
        q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}
void merge(int a[],int p,int q,int r)
{
    int l1,r1,i;
    i=p;
    l1=p;
    r1=q+1;
    while((l1<=q)&&(r1<=r))
    {
        if(a[l1]<=a[r1])
        {
            B[i]=a[l1];
            l1++;
            i++;
        }
        else
        {
            B[i]=a[r1];
            r1++;
            i++;
        }
    }
    while(l1<=q)
    {
        B[i]=a[l1];
        l1++;
        i++;
    }
    while(r1<=r)
    {
        B[i]=a[r1];
        r1++;
        i++;
    }
    for(i=p;i<=r;i++)
        a[i]=B[i];

}
void traverse(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<size;i++)
        printf("%d  ",a[i]);
}
