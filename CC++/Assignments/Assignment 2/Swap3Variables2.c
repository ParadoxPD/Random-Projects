
// wap to take 3 no and interchange them without 4th variable
//x=z,y=x,z=y

#include <stdio.h>

int main()
{

    int x, y, z;
    printf("Enter 1st no :  ");
    scanf("%i", &x);
    printf("Enter 2nd no :  ");
    scanf("%i", &y);
    printf("Enter 3nd no :  ");
    scanf("%i", &z);

    x = x + (y + z);
    z = x - (y + z);
    y = x - (y + z);
    x = x - (y + z);

    printf("X = %i , Y = %i and  Z = %i\n", x, y, z);

    return 0;
}
