
//insertion in double linked list
#include<stdio.h>
#include<malloc.h>

struct Node
{
    int info;
    struct Node *prev,*next;
};
typedef struct Node node;

node* create(node *);
void traverse(node *);
node* insert_at_begin(node*);
void insert_at_end(node*);
void insert_at_ith(node*,int);


int main()
{
    node *start=NULL;
    int i, val;
    start = create(start);
    traverse(start);
    start = insert_at_begin(start);
    traverse(start);
    insert_at_end(start);
    traverse(start);
    printf("Enter the value of i=");
    scanf("%d",&i);
    insert_at_ith(start,i);
    traverse(start);
    return 0;
}

node* create(node *S)
{
    node *temp,*pre;
    if (S == NULL)
    {
        S=(node*)malloc(sizeof(node));
        printf("Enter the data to first node=");
        scanf("%d",&(S->info));
        S->prev = NULL;
        S->next = NULL;
    }
    temp=S;
    char ch = 'Y';
    while(ch == 'Y')
    {
        temp->next = (node*)malloc(sizeof(node));
        pre = temp;
        temp = temp->next;
        printf("\nEnter the value to node=");
        scanf("%d",&(temp->info));
        temp->prev= pre;
        printf("\nTo continue press 'Y' or else 'N'=");
        scanf(" %c",&ch);

    }
    temp->next=NULL;
    return S;
}

void traverse(node *S)
{
    node *temp,*temp1;
    temp= S;
    printf("\nForward Traversing=\n");
    while(temp != NULL)
    {
        temp1 = temp;
        printf("%d\t",temp->info);
        temp=temp->next;
    }
    printf("\n\nReverse Traversing=\n");
    while(temp1!= NULL)
    {
        printf("%d\t",temp1->info);
        temp1 = temp1-> prev;
    }
}

node* insert_at_begin(node *S)
{
    node *newn;
    newn = (node*)malloc(sizeof(node));
    printf("Enter the value to new node=");
    scanf("%d",&(newn->info));
    newn ->next = S;
    S->prev=newn;
    newn->prev = NULL;
    S = newn;
    return S;
}

void insert_at_end(node *S)
{
    node *temp,*newn;
    temp = S;
    while(temp -> next != NULL)
    {
        temp=temp->next;
    }
    newn=(node*)malloc(sizeof(node));
    printf("\nEnter the data to new node=");
    scanf("%d",&(newn->info));
    newn->next = NULL;
    newn->prev= temp;
    temp->next=newn;
}

void insert_at_ith(node *S,int i)
{
    node *temp,*temp1,*newn;
    newn=(node*)malloc(sizeof(node));
    printf("Enter data into new node=");
    scanf("%d",&(newn->info));
    int k = 1;
    temp = S;
    while(k<i)
    {
        temp = temp ->next;
        k++;
    }
    temp1 = temp ->next;
    temp->next= newn;
    newn->prev=temp;
    newn->next = temp1;
    temp1->prev=newn;
}
