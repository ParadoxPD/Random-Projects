/*Enter the Principal, time and rate of interest, and then calculate compound interest*/

#include <stdio.h>
#include <math.h>

float interest(float, float, int);
int main()
{
    float rate, principal;
    int time;
    printf("Enter Principal : ");
    scanf("%f", &principal);
    printf("Enter Rate : ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%d", &time);

    printf("Compound Interest : %f\n", interest(principal, rate, time));

    return 0;
}

float interest(float principal, float rate, int time)
{
    return (principal * pow((1 + (rate / 100)), time) - principal);
}