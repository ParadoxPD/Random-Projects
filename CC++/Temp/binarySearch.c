// C program to implement Binary Search
#include <stdio.h>
#define SIZE 10
int binarySearch(int [], int );
void sort(int []);
void input(int []);
void display(int []);

int main()
{
    int i, key, a[SIZE];

    input(a);
    sort(a);
    display(a);


    printf("Enter Element to be searched: \n");
    scanf("%d", &key);

    int result = binarySearch(a,key);
    (result == -1)
    ? printf("Element is not present in array\n")
    : printf("Element is present at index %d\n",result);

    return 0;
}

void input(int a[])
{
    int i;
    printf("Enter the Elements: \n");
    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
}

void display(int a[])
{
    int i;
    printf("The Elements: \n");
    for (i = 0; i < SIZE; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

void sort(int a[])
{
    int i,j,swap,pos=-1;
    for(i = 0; i < SIZE - 1; i++)
    {
        pos=i;
        for(j = i + 1; j < SIZE; j++)
            if(a[pos] > a[j])
                pos=j;

        if(pos != i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
        }
    }
}

int binarySearch(int arr[], int key)
{
    int l = 0,u = SIZE-1,mid;

    while (l <= u)
    {
        mid = (l + u) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            l = mid + 1;

        else
            u = mid - 1;
    }
    return -1;

}
