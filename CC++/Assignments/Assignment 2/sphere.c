// To print volume of sphere

#include<stdio.h>

int main() {

    float rad=0,vol=0;

    printf("Enter Radius : ");
    scanf("%f",&rad);

    vol = 4*3.14*rad*rad*rad/3;
    printf("Volume : %f\n",vol);

    return 0;

}

