//implementation of linked stack (stack using linked list)
#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int info;
    struct Node *next;
} node;

node* push(node *);
node* pop(node *);
void traverse(node *);
node *delete_first(node *);
node *insert_first(node *,node *);

void main ()
{
    node *top = NULL;
    int opt;
    while(1)
    {
        printf("\nAvailable Options:\n 1.Push\n 2.Pop\n 3.Traverse\n 4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&opt);
        printf("\n");
        switch(opt)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            traverse(top);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter valid option!!");

        }
    }
}
node* push (node *top)
{
    node *data = (node *)malloc(sizeof(node));
    if(data == NULL)
        printf("\nStack Overflow\n");
    else
    {
        printf("\nEnter new element in the list : ");
        scanf("%d", &(data->info));
        return insert_first(top,data);
    }
}

node* pop(node *top)
{
    if(top == NULL)
    {
        printf("\nStack Underflow\n");
        return NULL;
    }
    else
    {
        printf("The popped element : %d\n",top->info);
        return delete_first(top);
    }
}
void traverse(node *top)
{
    int i;
    node *ptr;
    ptr = top;
    printf("\nElements in the Stack are:\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr = ptr->next;
    }
}


node *delete_first(node *start)
{
    node *ptr = start;
    ptr = ptr->next;
    start = ptr;
    return start;
}


node *insert_first(node *start,node * data)
{

    if(start !=NULL)
    {
        data->next = start;
        start = data;
    }
    else
    {
        start = data;
        start -> next = NULL;
    }
    return start;
}
