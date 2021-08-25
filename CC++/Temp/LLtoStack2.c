//implementation of linked stack (stack using linked list)
#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int info;
    struct node *next;
}node;

node* push(node *);
node* pop(node *);
void traverse(node *);
void main ()
{
 node *top;
    int opt;
    while(1)
    {
        printf("\nAvailable Options:\n 1.Push\n 2.Pop\n 3.Traverse\n 4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            {
                top = push(top);
                break;
            }
            case 2:
            {
                top = pop(top);
                break;
            }
            case 3:
            {
                traverse(top);
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                printf("Enter valid option!!");
            }
        }
    }
}
node* push (node *top)
{
    int info;
    node *ptr = ( node *)malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d",&info);
       ptr->info = info;
       ptr->next=top;
       top = ptr;
    }

    return top;
}

node* pop(node *top)
{
    int item;
   node *ptr;
    if (top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        item = top->info;
        ptr = top;
        top = top->next;
        free(ptr);
        printf("Item popped!!");

    }
    return top;
}
void traverse(node *top)
{
    int i;
    node *ptr;
    ptr=top;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Elements in the Stack are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr = ptr->next;
        }
    }
}
