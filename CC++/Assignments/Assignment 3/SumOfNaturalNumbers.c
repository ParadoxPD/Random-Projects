/*Wap to find sum of N consecutive no if starting no is 1
*/

#include <stdio.h>
int main()
{
    int N = 0, sum;
    printf("Enter a number: ");
    scanf("%d", &N);
    sum = (N * (N + 1)) / 2;
    printf("The sum is : %d", sum);

    return 0;
}
