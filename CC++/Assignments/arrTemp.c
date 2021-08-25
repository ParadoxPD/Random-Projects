
#include<stdio.h>
int main()
{
    int i,te=0;
    int ar[6];
    printf("Enter the elements\n");

    for(i=0; i<=5; i++)
        scanf("%d",&ar[i]);

    for(i=0; i<=5; i=i+2)
    {
        te=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=te;

    }

    for(i=0; i<=5; i++)
        printf("%d\n",ar[i]);
    return 0;
}

