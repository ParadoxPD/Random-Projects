//traversal in double linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *prev,*next;
};

typedef struct Node node;

node* create(node *);
void traverse(node *);

int count = 0;

int main()
{
    node *start=NULL;
    int i, val;
    start = create(start);
    traverse(start);
    return 0;
}

node* create(node *S)
{
    node *temp,*pre;
    if (S == NULL)
    {
        S=(node*)malloc(sizeof(node));
        printf("Enter the data to first node : ");
        scanf("%d",&(S->info));
        S->prev = NULL;
        S->next = NULL;
        count++;
    }
    temp=S;
    char ch = 'Y';
    while(ch == 'Y')
    {
        temp->next = (node*)malloc(sizeof(node));
        pre = temp;
        temp = temp->next;
        printf("\nEnter the Data of next node : ");
        scanf("%d",&(temp->info));
        temp->prev= pre;
        count++;
        printf("\nTo continue press 'Y' or else 'N' : ");
        scanf(" %c",&ch);

    }
    temp->next=NULL;
    return S;
}

void traverse(node *S)
{
    node *temp,*temp1;
    temp= S;
    printf("\nForward Traversing : \n");
    while(temp != NULL)
    {
        temp1 = temp;
        printf("%d\t",temp->info);
        temp=temp->next;
    }
    printf("\n\nReverse Traversing : \n");
    while(temp1!= NULL)
    {
        printf("%d\t",temp1->info);
        temp1 = temp1-> prev;
    }
}

