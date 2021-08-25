/*shorting elements in an array*/

#include <stdio.h>
int main()
{
    int a[100], i, temp, j, n, min, avg = 0;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    temp = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > temp)
            temp = a[i];

        if (a[i] < min)
            min = a[i];

        avg = avg + a[i];
    }

    printf("\nminimum element value is : %d", min);
    printf("\nmaximum element value is : %d", temp);
    printf("\nthe average value of the array is : %d", avg / n);

    return 0;
}