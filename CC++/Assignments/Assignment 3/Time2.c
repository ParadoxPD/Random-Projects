/*Program to calculate the year, month and days by giving days as input*/

#include <stdio.h>

int main()
{

    int yr, mon, days;
    printf("Enter the Days : ");
    scanf("%d", &days);

    yr = days / 365;
    days %= 365;
    mon = days / 30;
    days %= 30;

    printf("%d years %d months %d days\n", yr, mon, days);

    return 0;
}
