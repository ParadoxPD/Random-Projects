/*To Insert an element to an Array*/

#include <stdio.h>

int main()
{
    int i, size, pos, ele;
    printf("Enter size : ");
    scanf("%d", &size);
    int a[size + 1];
    printf("Enter elements :\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Enter element to be inserted : ");
    scanf("%d", &ele);
    printf("Enter position : ");
    scanf("%d", &pos);
    for (i = size + 1; i > pos - 1; i--)
        a[i] = a[i - 1];

    a[pos - 1] = ele;
    printf("New Array :\n");

    for (i = 0; i < size + 1; i++)
        printf("%d\n", a[i]);

    printf("No of elements : %d\n", size + 1);

    return 0;
}
