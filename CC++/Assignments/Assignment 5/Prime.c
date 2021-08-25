
/*Prime*/

#include <stdio.h>
int main()
{

    int N, i, c = 0;
    printf("Enter a number : ");
    scanf("%d", &N);

    for (i = 2; i < N; i++)
        if (N % i == 0)
            c++;

    if (c == 0)
        printf("Prime Number");
    else
        printf("Not A Prime Number");
    return 0;
}
