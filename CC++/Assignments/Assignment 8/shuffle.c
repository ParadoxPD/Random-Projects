/*interchanging the even and odd positions*/

#include <stdio.h>
main()
{
    int a[10], i, temp, size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < size - 1; i += 2)
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    printf("The shuffled array is:\n");
    for (i = 0; i < size; i++)
        printf("%d\t", a[i]);
}