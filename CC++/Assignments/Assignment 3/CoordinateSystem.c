/* Rectangular to polar coordinate system */

#include <stdio.h>
#include <math.h>

int main()
{

    float X, Y;
    float R, Theta;
    printf("Enter the coordinate in cartesian system :");
    scanf("%f%f", &X, &Y);

    R = sqrt(X * X + Y * Y);
    Theta = atan(Y / X);
    Theta *= 180 / 3.14;
    printf("R : %f\n", R);
    printf("Theta %f\n", Theta);

    return 0;
}
