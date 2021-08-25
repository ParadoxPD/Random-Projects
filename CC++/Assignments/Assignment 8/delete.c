
/*To Delete an element from an Array*/

#include<stdio.h>


int main()
{
    int i,size,pos;
    printf("Enter size : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements :\n");
    for (i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Enter position : ");
    scanf("%d",&pos);
    for (i=pos-1; i<size-1; i++)
        a[i]=a[i+1];

    printf("New Array :\n");

    for (i = 0; i < size-1; i++)
        printf("%d\n",a[i]);


    return 0;
}
