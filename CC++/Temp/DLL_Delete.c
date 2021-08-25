//deletion in double linked list
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
node* delete_at_begin(node*);
void delete_at_end(node*);
void delete_at_ith(node*,int);
int count;


int main()
{
    node *start=NULL;
    int i, val;
    start = create(start);
    traverse(start);
    start = delete_at_begin(start);
    traverse(start);
    delete_at_end(start);
    traverse(start);
    printf("\nEnter the value of i between 0 and %d =",count-1);
    scanf("%d",&i);
    delete_at_ith(start,i);
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
        count++;
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
        count++;
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

node* delete_at_begin(node *start)
{
    node *temp;
    temp = start;
    start=start->next;
    start->prev = NULL;
    printf("\nThe deleted item is %d",temp->info);
    free(temp);
    count--;
    return start;
}

void delete_at_end(node *start)
{
    node *temp1,*temp;
    temp=start;
    while(temp->next != NULL)
    {
        temp1 = temp;
        temp = temp -> next;
    }
    temp1 -> next = NULL;
    printf("\nThe deleted item is %d",temp->info);
    free(temp);
    count--;
}

void delete_at_ith(node *s,int i)
{
    if(i==0)
        return delete_at_begin(s);
    if(i==count-1)
        return delete_at_end(s);
    int k = 0;
    node *ptr,*previous,*nextPtr;
    ptr = s;
    while (k<i)
    {
        ptr = ptr -> next;
        k++;

    }
    previous = ptr->prev;
    previous->next = ptr->next;
    nextPtr = ptr-> next;
    nextPtr -> prev = previous;
    printf("\nThe deleted item is %d",ptr->info);
    free(ptr);
    count--;
}
