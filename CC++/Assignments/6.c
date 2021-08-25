// wap to take 2 no and swap them

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter 1st no :  ");
    scanf("%i", &a);
    printf("Enter 2nd no :  ");
    scanf("%i", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%i  and  %i\n", a, b);

    return 0;
}
