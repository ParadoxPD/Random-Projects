//WAP to find the value of t where t=ax3+bx2+cx+d where a, b, c, d, x are constants

#include <stdio.h>

int main()
{
    float A = 0.0, B = 0.0, C = 0.0, D = 0.0, X = 0.0;
    printf("Enter A : ");
    scanf("%f", &A);
    printf("Enter B : ");
    scanf("%f", &B);
    printf("Enter C : ");
    scanf("%f", &C);
    printf("Enter D : ");
    scanf("%f", &D);
    printf("Enter X : ");
    scanf("%f", &X);

    float T = A * X * X * X + B * X * X + C * X + D;
    printf("T : %f\n", T);

    return 0;
}
