//WAP to find the value of V where v2 = u2 - 2as

#include <stdio.h>
#include <math.h>

int main()
{
    float S = 0.0, U = 0.0, A = 0.0, V = 0.0;
    printf("Enter Initial Velocity : ");
    scanf("%f", &U);
    printf("Enter Acceleration : ");
    scanf("%f", &A);
    printf("Enter Height : ");
    scanf("%f", &S);

    V = sqrt(U * U - 2 * A * S);
    printf("Final Velocity : %f\n", V);

    return 0;
}
