
/* Divisible By 18 and 32*/

#include <stdio.h>

int main()
{
    int i, temp;
    for (i = 1000; i >= 1; i--)
    {
        if(i%18==0 && i%32 == 0)
            break;
    }
    printf("%d ",i);

    return 0;
}
