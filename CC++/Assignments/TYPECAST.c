
#include<stdio.h>
#include<math.h>
main()
{
    int n,d,i;
    printf("Enter the number and the place of digit : ");
    scanf("%d%d",&n,&d);
    i=n%((int)pow(10,d));
    i=i/((int)pow(10,d-1));

    printf("The digit is : %d",i);
}


x=1 y=2 z=3

x=6 y=2 z=3
x=6 y=1 z=3
x=6 y=1 z=2
x=3 y=1 z=2
