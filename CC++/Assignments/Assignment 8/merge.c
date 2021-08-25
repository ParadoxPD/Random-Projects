/*merge 2 array ascending order store it in 3rd array*/

#include <stdio.h>
main()
{
    int a[20], b[20], c[40], size1, size2, size3, i, j, min = 0, temp;
    printf("Enter the size for Array A : ");
    scanf("%d", &size1);
    printf("Enter the elements for the Array A : \n");
    for (i = 0; i < size1; i++)
        scanf("%d", &a[i]);
    printf("Enter the size for Array B : ");
    scanf("%d", &size2);
    printf("Enter the elements for the Array B : \n");
    for (i = 0; i < size2; i++)
        scanf("%d", &b[i]);
    size3 = size1 + size2;
    i = 0;
    for (i = 0; i < size3; i++)
    {
        if (i < size1)
            c[i] = a[i];
        else
            c[i] = b[i - size1];
    }

    for (i = 0; i < size3; i++)
    {
        min = i;
        for (j = i + 1; j < size3; j++)
            if (c[j] < c[min])
                min = j;

        temp = c[min];
        c[min] = c[i];
        c[i] = temp;
    }

    printf("The merged array is=\n");
    for (i = 0; i < size3; i++)
        printf("%d\n", c[i]);
}