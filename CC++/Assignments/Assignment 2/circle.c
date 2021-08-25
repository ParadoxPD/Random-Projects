// To print area and circumference of circle

#include<stdio.h>

int main() {

    float rad=0,area=0,cir=0;

    printf("Enter radius : ");
    scanf("%f",&rad);

    area = 3.14*rad*rad;
    cir = 3.14*2*rad;

    printf("Area : %f \nPerimeter : %f\n",area,cir);

    return 0;

}
