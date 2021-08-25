/*selection sort
*/
#include <stdio.h>

int main()
{
    int a[100], i, temp, j, n, min;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] > a[min])
                min = j;

        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
