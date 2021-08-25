//linear search
#include <stdio.h>


int main()
{
    int a[100],i,n,key;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The value to be searched : ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("%d\n",i);
            break;
        }

    }

    if(i==n)
        printf("element  not  found");


    return 0;
}
