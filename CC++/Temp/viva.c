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
        printf("\nEnter data to first node : ");
        scanf("%d",&(s -> info));
    }
    temp = s;
    char ch = 'Y';
    while(ch == 'Y' || ch == 'y')
    {
        temp -> next = (node*)malloc(sizeof(node));
        temp = temp ->next;
        printf("\nEnter data to New Node : ");
        scanf("%d",&(temp -> info));
        printf("\nEnter 'Y' to continue or Press 'N' to stop : ");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return s;
}

void traverse(node *start)
{
    node *ptr;
    ptr = start;

    printf("\nThe List is : \n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr->info);
        ptr = ptr -> next;
    }
}
node* swap (node* start)
{
    node *ptr,*ptr2,*ptr2_Prev,*ptrPrev;
    ptr = start;
    ptr2 = ptr;
    ptrPrev = ptr;
    ptr = ptr->next;
    while(ptr2->next !=NULL)
    {
        ptr2_Prev = ptr2;
        ptr2 = ptr2->next;
    }

    ptrPrev -> next = ptr -> next;
    ptr -> next = ptr2;
    ptr2_Prev -> next = ptr;
    return start;
}
