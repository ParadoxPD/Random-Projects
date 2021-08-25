
/*Electric Bill*/

#include <stdio.h>

int main()
{
    int unit;
    float bill = 0;
    printf("Enter Units : ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 200)
        bill = 0.5 * unit;

    else if (unit > 200 && unit < 400)
        bill = 0.65 * (unit - 200) + 100;

    else if (unit > 400 && unit < 600)
        bill = 0.8 * (unit - 400) + 230;

    else
        bill = 1 * (unit - 600) + 390;

    printf(" Bill : %f\n", bill);

    return 0;
}
