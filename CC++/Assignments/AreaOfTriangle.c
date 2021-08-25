// wap to find area of triangle

#include <stdio.h>

int main()
{

    float len, width;
    printf("Enter length :  ");
    scanf("%f", &len);
    printf("Enter breadth :  ");
    scanf("%f", &width);

    float area = 0.5 * len * width;
    printf("Area : %f\n", area);

    return 0;
}
