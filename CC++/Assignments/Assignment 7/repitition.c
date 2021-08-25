/* */

#include <stdio.h>

int main()
{
    int i, N, d, temp, M, c;
    printf("Enter  a number : ");
    scanf("%d", &N);
    for (i = 1; i <= 10; i++)
    {
        temp = i % 10;
        c = 0;
        M = N;
        while (M > 0)
        {
            d = M % 10;
            if (d == temp)
                c++;
            M /= 10;
        }
        printf("%d - ", temp);
        switch (c)
        {
        case 1:
            printf("One Time");
            break;
        case 2:
            printf("Two Time");
            break;
        case 3:
            printf("Three Time");
            break;
        case 4:
            printf("Four Time");
            break;
        case 5:
            printf("Five Time");
            break;
        case 6:
            printf("Six Time");
            break;
        case 7:
            printf("Seven Time");
            break;
        case 8:
            printf("Eight Time");
            break;
        case 9:
            printf("Nine Time");
            break;
        case 0:
            printf("Zero Time");
            break;
        }
        printf("\n");
    }

    return 0;
}
