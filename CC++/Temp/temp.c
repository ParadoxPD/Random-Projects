#include<stdio.h>
int main(){
float a[5] ={20,90,13,9,5};
float *p1=&a[0];
float *p2 = p1+3;
    printf("%d",(p2-p1));




}
