/*Calculate Power*/

#include <stdio.h>
#include <math.h>
float power(int, int);
int main()
{
    int N, P;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("Enter the Power : ");
    scanf("%d", &P);
    printf("Answer : %f", power(N, P));

    return 0;
}

float power(int n, int p)
{

    int i;
    float res = 1;

    for (i = 1; i <= abs(p); i++)
        res *= n;

    return (p >= 0 ? res : (1 / res));
}
