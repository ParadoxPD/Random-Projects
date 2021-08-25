/*Prime*/

#include <stdio.h>
int main()
{

    int N, i, j, c;
    printf("Enter a number : ");
    scanf("%d", &N);
    for (j = 2; j <= N; j++)
    {
        c = 0;
        for (i = 2; i < j; i++)
        {

            if (j % i == 0)
                c++;
        }

        if (c == 0)
            printf("%d\t", j);
    }
    return 0;
}
