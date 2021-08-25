// Program to convert Fahrenheit to Celsius using formula C/5 = (F-32)/9

#include<stdio.h>

int main() {
    float celcius=0.0,fahrenheit=0.0;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celcius = (5*(fahrenheit-32))/9;
    printf("Temperature in celcius : %f\n",celcius);

    return 0;

}
