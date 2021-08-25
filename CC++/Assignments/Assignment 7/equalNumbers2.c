/* Equal digits number within a range*/

#include <stdio.h>

int main()
{
    int i, d, temp;
    for (i = 10; i <= 1000; i++)
    {
        temp = i;
        d = temp % 10;
        temp /= 10;
        while (temp > 0)
        {
            if (temp % 10 != d)
                break;
            d = temp % 10;
            temp = temp / 10;
        }
        if (temp == 0)
            printf("%d ", i);
    }

    return 0;
}
