//QuickSort Algorithm


#include<stdio.h>

void quickSort(int [],int,int );
int partition(int [],int,int ) ;
void swap(int [],int,int );

int main()
{
    int i, size, a[25];

    printf("Number of elements : ");
    scanf("%d",&size);

    printf("Enter %d elements : ", size);
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    quickSort(a,0,size-1);

    printf("Order of Sorted elements : ");
    for(i=0; i<size; i++)
        printf(" %d",a[i]);

    return 0;
}


void quickSort(int a[],int start,int end)
{
    if (start >= end)
        return;

    int index =  partition(a, start, end);

    quickSort(a, start, index - 1);
    quickSort(a, index + 1, end);

}


int partition(int a[],int p,int r)
{

    int pivotValue = a[r];
    int pivotIndex = p;
    for (int i = p; i < r; i++)
    {
        if (a[i] < pivotValue)
        {
            swap(a, i, pivotIndex);
            pivotIndex++;

        }
    }
    swap(a, pivotIndex, r);
    return pivotIndex;
}


void swap(int a[],int x,int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
