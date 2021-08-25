
// Making single link list dynamically using function //
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE
{
    int info;
    struct NODE *next;
} node;

void traverse(node *);

int main()
{
    node *START, *temp;
    int res;
    START = (node *)malloc(sizeof(node));
    printf("\nEnter new element in the list : ");
    scanf("%d", &(START->info));
    START->next = NULL;
    temp = START;
    while (1)
    {
        printf("\nEnter 1 to continue or enter 0 to stop the list here : ");
        scanf(" %d", &res);
        if (res == 1)
        {
            temp->next = (node *)malloc(sizeof(node));
            temp = temp->next;
            printf("\nEnter new element in the list : ");
            scanf("%d", &(temp->info));
        }
        else
            break;
    }
    temp->next = NULL;
    printf("\nYour list is :: \n");
    traverse(START);
    return 0;
}
void traverse(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", (ptr->info));
        ptr = ptr->next;
    }
}
