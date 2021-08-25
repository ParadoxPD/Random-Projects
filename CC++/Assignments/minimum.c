//minimum

#include<stdio.h>
int main()
{
    int a[100],size,pos,i,min;
    printf("enter the size = ");
    scanf("%d",&size);
    printf("the elements of the array is =\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    min=a[0];
    pos=1;

    for(i=0;i<size;i++)
     {
         if(a[i]<min)
         {
             min=a[i];
             pos=i+1;
         }
     }

    printf("Minimum = %d \n",min);
    printf("Pos = %d",pos);

    return 0;
}
