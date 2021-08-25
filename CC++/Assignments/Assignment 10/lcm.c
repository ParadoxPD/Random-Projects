/*Calculate LCM*/

#include <stdio.h>

int lcm(int, int);
int main()
{

    int a, b;
    printf("Enter the 2 no : ");
    scanf("%d%d", &a, &b);

    printf("LCM : %d\n", lcm(a, b));
}

int lcm(int a, int b)
{
    int i;
    for (i = a > b ? a : b; i <= a * b; i++)
        if (i % a == 0 && i % b == 0)
            break;
    return i;
}