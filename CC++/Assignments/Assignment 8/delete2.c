/*WAP to delete an element from an array*/

#include <stdio.h>

int main()
{
    int i, size, ele, pos;
    printf("Enter size : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter elements :\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Enter element to be deleted : ");
    scanf("%d", &ele);

    for (i = 0; i < size; i++)
    {
        if (a[i] == ele)
        {
            pos = i + 1;
            break;
        }
    }

    for (i = pos - 1; i < size - 1; i++)
        a[i] = a[i + 1];

    printf("New Array :\n");

    for (i = 0; i < size - 1; i++)
        printf("%d\n", a[i]);

    return 0;
}
