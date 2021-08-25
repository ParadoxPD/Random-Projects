/*Wap to find sum of N consecutive no if starting no is 1
*/

#include <stdio.h>
int sum(int);
int main()
{
    int N = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("The sum is : %d", sum(N));

    return 0;
}

int sum(int n)
{
    if (n == 1)
        return 1;
    return (n + sum(n - 1));
}