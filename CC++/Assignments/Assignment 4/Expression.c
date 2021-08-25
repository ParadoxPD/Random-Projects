/*To evaluate X = (a-b)/(c-d) if c!=d*/

#include <stdio.h>

int main()
{

    float a, b, c, d;
    float X = 0;
    printf("A : ");
    scanf("%f", &a);
    printf("B : ");
    scanf("%f", &b);
    printf("C : ");
    scanf("%f", &c);
    printf("D : ");
    scanf("%f", &d);
    if (c == d)
        printf("Not Possible\n");
    else
    {
        X = (a - b) / (c - d);
        printf("X : %f\n", X);
    }

    return 0;
}
