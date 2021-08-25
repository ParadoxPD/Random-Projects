/* Polar to Rectangular coordinate system */

#include <stdio.h>
#include <math.h>

int main()
{

    float R, Theta;
    float X, Y;
    printf("Enter the coordinate in Polar system : ");
    scanf("%f%f", &R, &Theta);

    X = R * cos(Theta * 3.14 / 180);
    Y = R * sin(Theta * 3.14 / 180);
    printf("X : %f\n", X);
    printf("Y %f", Y);

    return 0;
}
