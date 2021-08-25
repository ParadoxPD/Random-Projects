/* perfect square and even within a range*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for (i = 2; i <= 100; i += 2)
        printf("%d ", i * i);
}