//WAP to find the value of S where s = ut+1/2at

#include <stdio.h>

int main()
{
    float S = 0.0, U = 0.0, A = 0.0, T = 0.0;
    printf("Enter Initial Velocity : ");
    scanf("%f", &U);
    printf("Enter Acceleration : ");
    scanf("%f", &A);
    printf("Enter Time : ");
    scanf("%f", &T);

    S = U * T + 0.5 * A * T * T;
    printf("Height : %f\n", S);

    return 0;
}
