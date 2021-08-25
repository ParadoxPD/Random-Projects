#include<stdio.h>

int main()
{
    int i,j=10;
    i = abc(j);
    printf("%d",--i);

}

int abc(int a)
{
    return a++;


}
