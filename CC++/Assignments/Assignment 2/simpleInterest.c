//Enter the Principal, time and rate of interest, and then calculate simple interest

#include <stdio.h>

int main()
{
    float rate = 0.0, principal = 0.0, time = 0.0;
    printf("Enter Principal : ");
    scanf("%f", &principal);
    printf("Enter Rate : ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%f", &time);

    float interest = principal * time * rate / 100;

    printf("Simple Interest : %f\n", interest);

    return 0;
}
