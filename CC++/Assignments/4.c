//write a c program to enter radius of a circle and find its area and perimeter

#include<stdio.h>
int main() {

    float r = 10;
    float area = 3.14*r*r;
    float per = 3.14*2*r;
    printf("Area : %f\n",area);
    printf("Perimeter : %f",per);

    return 0;
}



