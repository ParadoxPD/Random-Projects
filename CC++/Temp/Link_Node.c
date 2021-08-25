
#include <stdio.h>

struct NODE
{
    int INFO;
    struct NODE *NEXT;
};

typedef struct NODE node;

int main()
{
    node n1, n2, n3, n4, n5, *ptr;

    printf("Enter 5 values :: \n");
    scanf("%d%d%d%d%d", &(n1.INFO), &(n2.INFO), &(n3.INFO), &(n4.INFO), &(n5.INFO));
    n1.NEXT = &n2;
    n2.NEXT = &n3;
    n3.NEXT = &n4;
    n4.NEXT = &n5;
    n5.NEXT = NULL;
    ptr = &n1;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->INFO);
        ptr = ptr->NEXT;
    }
    return 0;
}
