/*Addition of two matrix*/

#include <stdio.h>
int main()
{
    int a[20], b[20], mul[20];
    int i, s;
    printf("Enter the Size of Array::");
    scanf("%d", &s);
    printf("Enter the elements of first Array ::\n");
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    printf("Enter the elements of second Array::\n");
    for (i = 0; i < s; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < s; i++)
        mul[i] = a[i] * b[i];

    printf("The new Array is::\n");
    for (i = 0; i < s; i++)
        printf("%d\t", mul[i]);

    return 0;
}