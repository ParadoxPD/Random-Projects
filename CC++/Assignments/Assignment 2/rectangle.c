// To print area and circumference of circle

#include<stdio.h>

int main() {

    float len=0,width=0,area=0,per=0;

    printf("Enter Length : ");
    scanf("%f",&len);
    printf("Enter Breadth : ");
    scanf("%f",&width);

    area = len*width;
    per = 2*(len+width);

    printf("Area : %f \nPerimeter : %f\n",area,per);

    return 0;

}

