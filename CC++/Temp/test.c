#include<stdio.h>
#include<malloc.h>

struct Node
{
    int info;
    struct Node * next;
};
typedef struct Node node;

node* create (node*);
void traverse (node*);
node* swap (node*);

int main()
{
    node *start = NULL;
    start = create(start);
    traverse(start);
    start=swap(start);
    traverse(start);
    return 0;
}

node* create (node *s)
{
    node *temp;
    if(s==NULL)
    {
        s=(node*)malloc(sizeof(node));
        printf("\nEnter data to first node=");
        scanf("%d",&(s -> info));
    }
    temp = s;
    char ch = 'Y';
    while(ch == 'Y')
    {
        temp -> next = (node*)malloc(sizeof(node));
        temp = temp ->next;
        printf("\nEnter data to New Node=");
        scanf("%d",&(temp -> info));
        printf("\nEnter 'Y' to continue or Press 'N' to stop=");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return s;
}

void traverse(node *start)
{
    node *ptr;
    ptr = start;

    printf("\nThe List is=\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr->info);
        ptr = ptr -> next;
    }
}
node* swap (node* start)
{
    node *ptr, *prev;
    ptr = start;
    prev = ptr;
    ptr = ptr -> next;
    start = ptr;
    prev -> next = ptr -> next;
    ptr -> next = prev;
    return start;
}

node* swap (node* start, node* ptr1, node* ptr2)
{
    node *ptr, *prev;
    ptr = start;
    prev = ptr;
    ptr = ptr -> next;
    start = ptr;
    prev -> next = ptr -> next;
    ptr -> next = prev;
    return start;
}
