#include <stdio.h>

int main(void)
{
    int i = 0, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int m;
        if (a >= b && a >= c)
        {
            if (b >= c)
                m = b;
            else
                m = c;
        }
        else if (b >= a && b >= c)
        {
            if (a >= c)
                m = a;
            else
                m = c;
        }
        else if (a >= b)
            m = a;
        else
            m = b;
        printf("%d\n", m);
    }
    return 0;
}