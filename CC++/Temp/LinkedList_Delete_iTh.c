/*WAP to delete the iTh node of a linked list.
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
void delete_ith(node *, int);
void traverse(node *);

int count = 0;

int main()
{
    node *start = NULL;

    start = input(start);
    traverse(start);
    int loc;
    printf("\nEnter the location on element to delete : ");
    scanf("%d", &loc);
    delete_ith(start, loc);
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

void delete_ith(node *start, int loc)
{
    node *ptr = start;
    node *prev = NULL;
    if ((count - 1) < loc)
    {
        printf("Ith node not present in list");
        return;
    }
    int i;
    for (i = 0; i < loc; i++)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);

    printf("\nAfter deleting the Ith element\n");
    printf("The New list is: \n");
}
