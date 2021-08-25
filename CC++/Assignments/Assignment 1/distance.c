//Program to accept distance in inch and convert it to cm and print it

#include <stdio.h>

int main()
{
    float inch=0.0, cm=0.0;
    printf("Enter distance in inch : ");
    scanf("%f", &inch);
    cm = 2.54 * inch;
    printf("Distance in cm is : %f\n", cm);

    return 0;
}
