/* Not divisible by 2 and 3 */

#include <stdio.h>
int main()
{

    int i;
    for (i = 1; i <= 100; i++)
        if (i % 2 != 0 && i % 3 != 0)
            printf("%d\t", i);
    return 0;
}
