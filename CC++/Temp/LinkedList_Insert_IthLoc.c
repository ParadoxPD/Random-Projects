// ADDING ELEMENT AFTER ITH NODE //
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE
{
    int info;
    struct NODE *next;
} node;
void add_after_ith(node *);
void traverse(node *);
int main()
{
    node *START, *temp;
    char ch = 'y';
    START = (node *)malloc(sizeof(node));
    printf("\nEnter the element in the list :: ");
    scanf("%d", &(START->info));
    START->next = NULL;
    temp = START;
    while (ch == 'y')
    {
        printf("\nEnter y to continue or enter n to stop the list here :: ");
        scanf(" %c", &ch);
        if (ch == 'y')
        {
            temp->next = (node *)malloc(sizeof(node));
            temp = temp->next;
            printf("\nEnter the next node :: ");
            scanf("%d", &(temp->info));
        }
        else
        {
            break;
        }
    }
    temp->next = NULL;
    printf("\nYour list is :: \n");
    traverse(START);
    add_after_ith(START);
    traverse(START);
    return 0;
}
void traverse(node *start)
{
    node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", (ptr->info));
        ptr = ptr->next;
    }
}
void add_after_ith(node *start)
{
    node *ptr, *data, *prev;
    int loc, i = 0;
    printf("\nEnter the ith node after which u want to incert the node :: ");
    scanf("%d", &loc);
    ptr = start;
    prev = start;
    while (i < loc)
    {
        prev = ptr;
        ptr = ptr->next;
        i++;
    }
    data = (node *)malloc(sizeof(node));
    printf("\nEnter the value of the node :: ");
    scanf("%d", &(data->info));
    prev->next = data;
    data->next = ptr;
}
