
//merging 2 linked lists
#include<stdio.h>
#include<malloc.h>

struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;

node* create(node*);
void traverse (node *);
void merge(node*,node*);

int main()
{
    node *start1 = NULL, *start2 = NULL;
    printf("Enter the elements of first list=\n\n");
    start1 = create(start1);
    traverse(start1);
    printf("\nEnter the elements of second list=\n\n");
    start2 = create(start2);
    traverse(start2);
    merge(start1,start2);
    printf("\nThe list after merging=\n");
    traverse(start1);
    return 0;
}

node* create (node *s)
{
    node *temp;
    if(s==NULL)
    {
        s=(node*)malloc(sizeof(node));
        printf("Enter data to first node=");
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

void traverse (node *start1)
{
    node* ptr;
    ptr = start1;
    printf("\nThe created List is=\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr->info);
        ptr = ptr-> next;
    }
}

void merge (node *s1, node *s2)
{
    node *temp;
    temp = s1;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next=s2;
}
