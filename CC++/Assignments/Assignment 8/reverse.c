/*To Reverse an Array*/

#include <stdio.h>

int main()
{
    int i, size, temp;
    printf("Enter size : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter elements :\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - i - 1] = temp;
    }
    printf("Reversed elements :\n");

    for (i = 0; i < size; i++)
        printf("%d\n", a[i]);

    return 0;
}
