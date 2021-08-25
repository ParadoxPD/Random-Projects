/*WAP to reverse the nodes of a linked list.
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
node *reverse(node *);
void traverse(node *);

int count = 0;

int main()
{
    node *start = NULL;

    start = input(start);
    traverse(start);
    printf("After Reversing :\n");
    start = reverse(start);
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
        count++;
    }
    temp = S;
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y')
    {
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        printf("\nEnter data to New Node:");
        scanf("%d", &(temp->info));
        count++;
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

node *reverse(node *start)
{
    node *current, *prev, *nextptr;
    current = start;
    prev = current->next;
    current->next = NULL;
    while (prev != NULL)
    {
        nextptr = prev->next;
        prev->next = current;
        current = prev;
        prev = nextptr;
    }
    return current;
}