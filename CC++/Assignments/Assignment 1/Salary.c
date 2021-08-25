// wap to accept basic salary and find the gross salary
// Gross salary = Basic Salary + DA(60%) + HRA(15%)

#include <stdio.h>

int main()
{

    float basic, gross, da, hra;
    printf("Enter Basic Salary :  ");
    scanf("%f", &basic);
    da = 0.6 * basic;
    hra = 0.15 * basic;
    gross = basic + da + hra;
    printf("Gross Salary :   %f\n", gross);

    return 0;
}
