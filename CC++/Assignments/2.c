/*Hello World*/
#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n%2 == 0)
        printf("even");
    else
        printf("odd");
        return 0;
}
