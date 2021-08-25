
#include <stdio.h>
#include <malloc.h>

struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;

node *delete_ith(node *, int);
void traverse(node *);

int main()
{
    node *start, *temp, *ptr;
    int ele, loc;
    start = (node *)malloc(sizeof(node));
    printf("Enter data to first node: ");
    scanf("%d", &(start->info));
    start->next = NULL;
    temp = start;
    int ch = 1;
    while (ch == 1)
    {
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        printf("\nEnter data to New Node: ");
        scanf("%d", &(temp->info));
        printf("\nEnter 'Y' to continue or Press 'N' to stop: ");
        scanf(" %d", &ch);
    }
    temp->next = NULL;

    traverse(start);
    printf("Enter a location :");
    scanf("%d", &loc);
    start = delete_ith(start, loc);
    traverse(start);
    return 0;
}
void traverse(node *start)
{
    node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->info);
        ptr = ptr->next;
    }
}

node *delete_ith(node *start, int loc)
{
    node *ptr = start;
    node *prev = NULL;
    int i;
    for (i = 0; i < loc; i++)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    printf("\nAfter deleting the Ith element\n");
    printf("The New list is: \n");
    return start;
}