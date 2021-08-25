#include<stdio.h>


int main()
{
    int i,size,c1=0,c2=0;

    printf("Enter size : ");
    scanf("%d",&size);
    int a[size];

    printf("Enter elements :\n");
    for (i=0; i<size; i++)
        scanf("%d",&a[i]);

    for (i=0; i<size; i++)
        {
            if(a[i]%2==0)
                c1++;
            if(a[i]>=0)
                c2++;
        }


    printf("Even Numbers = %d \n",c1);
    printf("Odd Numbers = %d \n",size-c1);
    printf("Positive Numbers = %d \n",c2);
    printf("Negative Numbers = %d \n",size-c2);

    return 0;
}


