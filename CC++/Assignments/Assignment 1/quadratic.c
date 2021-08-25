// Enter coeffecients A,B,C for the quadratic equation and print the real roots

//Quadratic formula (-B +- sqrt(B2-4AC))/2A

#include <stdio.h>
#include <math.h>

int main()
{

    float A, B, C;
    printf("Enter the coefficients :");
    scanf("%f%f%f", &A, &B, &C);

    float alpha = 0.0, beta = 0.0,det=0.0;
    det = B*B-4*A*C;

    if (det >= 0)
    {
        alpha = (-B + sqrt(det)) / (2 * A);
        beta = (-B - sqrt(det)) / (2 * A);

        printf("The roots are %f and %f", alpha, beta);
    }
    else
    {
        printf("Not Possible");
    }
    return 0;
}
