#include <stdio.h>
int main()
{
    int i, first, last, mid, size, key, a[100];

    printf("Enter size of Array: ");
    scanf("%d", &size);

    printf("Enter the Elements:");

    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Enter Element to be searched: \n");
    scanf("%d", &key);

    first = 0;
    last = size - 1;
    mid = (first + last) / 2;

    while (first <= last)
    {
        if (a[mid] < key)
            first = mid + 1;
        else if (a[mid] == key)
        {
            printf("\nElement is present at %d position\n", mid + 1);
            break;
        }
        else
            last = mid - 1;

        mid = (first + last) / 2;
    }
    if (first > last)
        printf("\nElement is not present\n");

    return 0;
}