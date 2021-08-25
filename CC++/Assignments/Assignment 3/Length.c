/*Program to  calculate the meter, centimeter and millimeter by giving millimeter as input*/

#include <stdio.h>

int main()
{

    int milli, meter, centi;
    printf("Enter the Millimeters : ");
    scanf("%d", &milli);

    centi = milli / 10;
    milli %= 10;
    meter = centi / 100;
    centi %= 100;

    printf("%d Meters %d Centimeters %d Millimeter\n", meter, centi, milli);

    return 0;
}
