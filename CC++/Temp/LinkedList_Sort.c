/*WAP to sort the nodes of a linked list.
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
void sort(node *);
void traverse(node *);

int count = 0;

int main()
{
    node *start = NULL;

    start = input(start);
    traverse(start);
    printf("After Sorting :\n");
    sort(start);
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

void sort(node *s)
{
    int min;
    node *current, *next, *minptr;
    current = s;
    while (current->next != NULL)
    {
        min = current->info;
        minptr = current;
        next = current->next;
        while (next != NULL)
        {
            if (next->info < min)
            {
                min = next->info;
                minptr = next;
            }
            next = next->next;
        }
        if (min != current->info)
        {
            minptr->info = current->info;
            current->info = min;
        }
        current = current->next;
    }


}
