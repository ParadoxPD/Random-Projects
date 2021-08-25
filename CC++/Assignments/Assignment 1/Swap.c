// wap to take 2 no and swap them

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter 1st no :  ");
    scanf("%i", &a);
    printf("Enter 2nd no :  ");
    scanf("%i", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%i  and  %i\n", a, b);

    return 0;
}
v