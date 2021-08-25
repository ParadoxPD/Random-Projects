
// To print volume of cylinder

#include<stdio.h>

int main() {

    float rad=0,height=0,vol=0;

    printf("Enter Radius : ");
    scanf("%f",&rad);
    printf("Enter Height : ");
    scanf("%f",&height);

    vol = 3.14*rad*rad*height;
    printf("Volume : %f\n",vol);

    return 0;

}

