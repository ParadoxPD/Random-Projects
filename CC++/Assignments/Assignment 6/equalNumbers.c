/* Equal digits number within a range*/

#include <stdio.h>

int main()
{
    int i, temp, c1, c2;
    for (i = 10; i <= 1000; i++)
    {
        temp = i;
        c1 = 0;
        c2 = 0;
        if (temp % 10 == 0)
            continue;
        temp = temp / (temp % 10);
        while (temp > 0)
        {
            c1++;
            if (temp % 10 == 1)
                c2++;
            temp = temp / 10;
        }
        if (c1 == c2)
            printf("%d ", i);
    }

    return 0;
}
