//double linked list menu driven

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next,*prev;
};
typedef struct Node node;

node* create (node*);
void traverse (node*);
node* insert_at_begin(node*);
node* insert_at_end(node*);
node* insert_at_ith(node*,int);
void insert_after_val(node*,int);
node* delete_at_begin(node*);
node* delete_at_end(node*);
node* delete_at_ith(node*,int);

int count;

int main()
{
    node *start = NULL;
    int opt,i,j,val;
    start = create(start);
    traverse(start);
    printf("The operations to be performed on double linked list : \n");
    while(1)
    {
        printf("\n\nGIVE YOUR INPUT:\n1.Insert at Beginning\n2.Insert at End\n3.Insert at ith\n4.Insert after Value\n5.Delete at Beginning\n6.Delete at End\n7.Delete at ith\n8.Exit\n");
        printf("Give your Input : ");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            start = insert_at_begin(start);
            traverse(start);
            break;

        case 2:
            insert_at_end(start);
            traverse(start);
            break;

        case 3:
            printf("Enter the value of i : ");
            scanf("%d",&i);
            start = insert_at_ith(start,i);
            traverse(start);
            break;

        case 4:
           printf("Enter the value of val : ");
           scanf("%d",&val);
           insert_after_val(start,val);
           traverse(start);
           break;

        case 5:
            start = delete_at_begin(start);
            traverse(start);
            break;


        case 6:
            delete_at_end(start);
            traverse(start);
            break;


        case 7:
            printf("Enter the value of j between 0 and %d : ",count-1);
            scanf("%d",&j);
            start = delete_at_ith(start,j);
            traverse(start);
            break;

        case 8:
            exit(0);

        default:
            printf("NO option was selected!!!\n");
        }
    }
}

node* create(node *S)
{
    node *temp,*pre;
    if (S == NULL)
    {
        S=(node*)malloc(sizeof(node));
        printf("Enter the data to first node : ");
        scanf("%d",&(S->info));
        count++;
        S->prev = NULL;
        S->next = NULL;
    }
    temp=S;
    char ch = 'Y';
    while(ch == 'Y' || ch == 'y')
    {
        temp->next = (node*)malloc(sizeof(node));
        pre = temp;
        temp = temp->next;
        printf("\nEnter the value to node : ");
        scanf("%d",&(temp->info));
        count++;
        temp->prev= pre;
        printf("\nTo continue press 'Y' or else 'N' : ");
        scanf(" %c",&ch);

    }
    temp->next=NULL;
    return S;
}

void traverse(node *S)
{
    node *ptr,*previous;
    ptr= S;
    printf("\nForward Traversing : \n");
    while(ptr != NULL)
    {
        previous = ptr;
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n\nReverse Traversing : \n");
    while(previous!= NULL)
    {
        printf("%d\t",previous->info);
        previous = previous-> prev;
    }

    printf("\n");
    printf("\n");
    printf("\n");
}

node* insert_at_begin(node *S)
{
    node *newn;
    newn = (node*)malloc(sizeof(node));
    printf("Enter the value to new node : ");
    scanf("%d",&(newn->info));
    count++;
    newn ->next = S;
    S->prev=newn;
    newn->prev = NULL;
    S = newn;
    return S;
}

node* insert_at_end(node* S)
{
    node *ptr,*newn;
    ptr = S;
    while(ptr -> next != NULL)
    {
        ptr=ptr->next;
    }
    newn=(node*)malloc(sizeof(node));
    printf("\nEnter the data to new node : ");
    scanf("%d",&(newn->info));
    count++;
    newn->next = NULL;
    newn->prev= ptr;
    ptr->next=newn;
    return S;
}

node* insert_at_ith(node *S,int i)
{
    if(i==0)
        return insert_at_begin(S);
    if(i==count-1)
        return insert_at_end(S);

    node *ptr,*previous,*newn;
    newn=(node*)malloc(sizeof(node));
    printf("Enter data into new node : ");
    scanf("%d",&(newn->info));
    count++;
    int k = 1;
    ptr = S;
    while(k<i)
    {
        ptr = ptr ->next;
        k++;
    }
    previous = ptr ->next;
    ptr->next= newn;
    newn->prev=ptr;
    newn->next = previous;
    previous->prev=newn;
    return S;
}

void insert_after_val(node *start,int val)
{
    node *ptr,*previous,*newn;
    ptr =start;
    while (ptr != NULL)
    {
        if(ptr->info == val)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
            previous=ptr->next;
        }
    }
    newn=(node*)malloc(sizeof(node));
    printf("Enter data into new node : ");
    scanf("%d",&(newn->info));
    if(ptr != NULL)
    {
        newn -> next = ptr -> next;
        previous->prev=newn;
        ptr -> next=newn;
        newn->prev = ptr;
    }
    else
    {
        printf("\nSuch value is not present!!");
    }
}

node* delete_at_begin(node *start)
{
    node *ptr;
    ptr = start;
    start=start->next;
    start->prev = NULL;
    printf("\nThe deleted item is %d",ptr->info);
    free(ptr);
    count--;
    return start;
}

node* delete_at_end(node *start)
{
    node *previous,*ptr;
    ptr=start;
    while(ptr->next != NULL)
    {
        previous = ptr;
        ptr = ptr -> next;
    }
    previous -> next = NULL;
    printf("\nThe deleted item is %d",ptr->info);
    free(ptr);
    count--;
    return start;
}

node* delete_at_ith(node *s,int i)
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
    return s;
}
