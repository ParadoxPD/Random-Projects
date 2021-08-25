
#include <stdio.h>
#include <limits.h>
main()
{
    int a[20], size, i, first, second;
    printf("Enter the size for Array : ");
    scanf("%d", &size);
    printf("Enter the elements for the Array : \n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    first = a[0];
    for (i = 1; i < size; i++)
        if (a[i] > first)
            first = a[i];
    second = first;

    for (i = 0; i < size; i++)
    {
        if (a[i] < first)
        {
            second = first;
            first = a[i];
        }

        else if (a[i] < second && a[i] != first)
            second = a[i];
    }

    printf("second  Smallest element is %d\n", second);
}