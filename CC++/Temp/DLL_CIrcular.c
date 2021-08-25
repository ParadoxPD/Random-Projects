
// Creating circular double linked list //
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    int info;
    struct NODE *next,*prev;
} node;
node * create(node *);
void traverse(node *);
void reverse_traverse(node *);
int main()
{
    node * START;
    START = NULL;
    START = create(START);
    printf("\nElements of the list are :: \n");
    traverse(START);
    printf("\nReversing the elemnts of the list :: \n");
    reverse_traverse(START);
    return 0;
}
node * create(node * start)
{
    node *temp,*pre;
    char ch = 'y';
    if (start == NULL)
    {
        start = (node *)malloc(sizeof(node));
        printf("\nEnter 1st element of the list :: ");
        scanf("%d", &(start->info));
        start->prev = NULL;
        start->next = NULL;
    }
    temp = start;
    while (ch == 'y')
    {
        printf("\nEnter y to continue or n to stop here :: ");
        scanf(" %c", &ch);
        if (ch == 'y')
        {
            temp->next = (node *) malloc(sizeof(node));
            pre = temp;
            temp = temp->next;
            printf("\nEnter element to the list :: ");
            scanf("%d",&(temp->info));
            temp->prev = pre;
        }
        else
        {
            break;
        }
    }
    temp->next = start;
    start->prev = temp;
    return start;
}
void traverse(node * start)
{
    node * temp;
    temp = start;
    printf("%d\t",temp->info);
       temp = temp->next;
    while (temp != start)
    {
       printf("%d\t",temp->info);
       temp = temp->next;
    }
}
void reverse_traverse(node * start)
{
    node * temp;
    temp = start;
    do
    {
        temp = temp->prev;
        printf("%d\t",temp->info);
    }while(temp != start);
}
