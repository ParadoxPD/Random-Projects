/*Fibonacci*/

#include <stdio.h>
int main()
{

    int N, i = 1, s1 = 0, s2 = 1, s3;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("0\t1");

    while (i <= N - 2)
    {
        s3 = s1 + s2;
        printf("\t%d", s1 + s2);
        s1 = s2;
        s2 = s3;
        i++;
    }

    return 0;
}
