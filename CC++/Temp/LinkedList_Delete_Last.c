/*WAP to delete the Last node of a linked list.
*/

#include <stdio.h>
#include <malloc.h>

struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;

node *input(node *);
void delete_last(node *);
void traverse(node *);

int main()
{
    node *start = NULL;
    start = input(start);
    traverse(start);
    delete_last(start);
    traverse(start);
    return 0;
}
node *input(node *S)
{
    node *temp;
    if (S == NULL)
    {
        S = (node *)malloc(sizeof(node));
        printf("Enter data to first node:");
        scanf("%d", &(S->info));
    }
    temp = S;
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y')
    {
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        printf("\nEnter data to New Node:");
        scanf("%d", &(temp->info));
        printf("\nEnter 'Y' to continue or Press 'N' to stop:");
        scanf(" %c", &ch);
    }
    temp->next = NULL;
    return S;
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
    printf("\n");
}

void delete_last(node *start)
{
    node *ptr = start;
    node *prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);


    printf("\nAfter deleting the Last element\n");
    printf("The New list is: \n");
}
