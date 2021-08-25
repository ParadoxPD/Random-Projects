/* 4 digit perfect square whose 1st 2 and last 2 are also perfect squares*/

#include <stdio.h>


int main()
{
    int i, c, j,AA,BB;
    for (i = 32; i <= 99; i++)
    {
        c = 0;
        AA = (i * i) % 100;
        for (j = 0; j <= AA; j++)
        {
            if (j * j == AA)
            {
                c++;
                break;
            }
        }
        BB = (i * i) / 100;
        for (j = 0; j <= BB; j++)
        {
            if (j * j == BB)
            {
                c++;
                break;
            }
        }

        if (c == 2)
            printf("%d ", i * i);
    }
    return 0;
}
