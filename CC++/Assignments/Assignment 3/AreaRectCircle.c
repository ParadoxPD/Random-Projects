/*Calc area of rect and find rad of circle whose area is same as rect
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float Side, Area, Rad;
    printf("Enter the Side of Square : ");
    scanf("%f", &Side);

    Area = Side * Side;
    Rad = sqrt(Area / 3.14);
    printf("Area : %f\n", Area);
    printf("Radius of Circle : %f\n", Rad);

    return 0;
}
