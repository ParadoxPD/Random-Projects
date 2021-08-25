/*Find the numbers, which is divisible by the sum of its digits.*/

#include <stdio.h>

int main()
{
    int i, sum = 0, temp;

    for (i = 1; i <= 10000; i++)
    {
        temp = i;
        sum = 0;
        while (temp > 0)
        {
            sum = sum + temp % 10;
            temp = temp / 10;
        }

        if (i % sum == 0)
            printf("%d ", i);
    }
    return 0;
}
