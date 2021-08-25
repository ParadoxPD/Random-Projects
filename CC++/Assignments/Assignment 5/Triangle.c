/*Triangle Types and Validity*/

#include <stdio.h>

int main()
{
    float A, B, C;
    printf("Enter sides of Triangle : ");
    scanf("%f%f%f", &A, &B, &C);

    if (((A + B) > C) && ((B + C) > A) && ((C + A) > B))
    {
        if (A == B && B == C)
            printf("Equilateral");
        else if (A == B || B == C || C == A)
            printf("Isosceles");
        else if (((A * A + B * B) == C * C) || ((C * C + B * B) == A * A) || ((C * C + A * A) == B * B))
            printf("Right Angle Triangle");
        else
            printf("Scalene Triangle");
    }
    else
        printf("Not a valid Triangle");

    return 0;
}
