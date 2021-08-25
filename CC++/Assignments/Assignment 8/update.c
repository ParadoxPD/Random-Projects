#include<stdio.h>


int main()
{
    int i,size,pos,ele;

    printf("Enter size : ");
    scanf("%d",&size);
    int a[size];

    printf("Enter elements :\n");
    for (i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Enter position : ");
    scanf("%d",&pos);

    printf("Enter Value : ");
    scanf("%d",&ele);

    for (i=0; i<size; i++)
        if(i==pos-1)
            break;
    a[i] = ele;

    printf("New Array :\n");

    for (i = 0; i < size; i++)
        printf("%d\n",a[i]);


    return 0;
}

