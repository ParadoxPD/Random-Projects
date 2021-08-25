#include<stdio.h>
#include<malloc.h>
struct NODE
{
    int info;
    struct NODE *next;
};

typedef struct NODE node;
node*insert_at_begin(node*);
void insert_at_end(node*);
node* insert_at_ith(node*,int);
node* create(node*);
node*Deletion_first(node*);
node*delete_end(node*);
void delete_at_ith(node*,int);
int count = 0;
void search_element(node *,int);
void selection_sort(node*);





int main()
{

    int i;
    node *start=NULL;
    start=create(start);
    traverse(start);
    start=insert_at_begin(start);
    traverse(start);
    insert_at_end(start);
    traverse(start);
    insert_at_ith(start);
    traverse(start);
    Deletion_first(start);
    traverse(start);
    delete_end(start);
    traverse(start);
    printf("\nEnter the value for i between i and %d =",count);
    scanf("%d",&i);
    delete_at_ith(start,i);
    traverse(start);
    int ele;
    printf("\nEnter the value for element=");
    scanf("%d",&ele);
    search_element(start,ele);
    selection_sort(start);
    traverse(start);

    return 0;
}

node* create(node *S)
{
    node *temp;
    if(S==NULL)
    {
        S=(node*)malloc(sizeof(node));
        printf("Input data to the first node : \n");
        scanf("%d",&(S->info));
    }
    temp=S;
    char ch='y';
    while(ch=='y')
    {
        temp->next=(node*)malloc(sizeof(node));
        temp=temp->next;
        printf("Input data to the new node : \n");
        scanf("%d",&(temp->info));
        printf("Enter 'Y' to continue or 'N' to stop : \n");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return S;

}
void traverse(node *start)
{
    node*ptr;
    ptr = start;
    while(ptr!=NULL)
    {
        printf("%d\t", ptr->info);
        ptr=ptr->next;
    }
}
//insertion in beginning
node* insert_at_begin(node* S)
{
    node *new;
    new=(node*)malloc(sizeof(node));
    printf("\nEnter the data to the new node to be inserted at beginning: ");
    scanf("%d",&(new -> info));
    new -> next = S;
    S = new;
    return S;
}
//insert at end of the linked list
void insert_at_end(node*s)
{
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
     printf("\n enter the element to be inserted at end=");
    scanf("%d",&(ptr->info));

    node*p=s;
    while(p->next!=NULL)
    {
        p=p->next;
    }


    p->next=ptr;
   ptr->next=NULL;

   return ptr;
}
//insert at ith node
node*insert_at_ith(node*s)
{
    node*ptr;
    int j=0,i;
    node*p=s;
    ptr=(node*)malloc(sizeof(node));
    printf("\n enter the no. to be inserted=");
    scanf("%d",&(ptr->info));
    printf("enter the index=");
    scanf("%d",&i);
    while(j<=i-1)
    {
        p=p->next;
        j++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return ptr;

}
node*Deletion_first(node* start)
{
 node *ptr;
 if(start != NULL)
 {
     ptr = start;
     start = start->next;
     printf("\nThe deleted element is = %d\n",ptr->info);
     free(ptr);
 }
 printf("The Linked list is =\n");
 return start;
}
node* delete_end(node *start)
{
 node *ptr,*ptr1;
 ptr =start;
 while(ptr->next != NULL)
 {
     ptr1=ptr;//this points to the second last node
     ptr = ptr->next;
 }
 printf("\n\nThe deleted element is %d\n",ptr->info);
 ptr1->next = NULL;
}

void delete_at_ith(node *S,int i)
{
 node *ptr,*ptr1;
 int k;
 k=1;
 ptr = S;
 while(k<i)
 {
     ptr1=ptr;
     ptr = ptr -> next;
     k++;
 }
 ptr1->next=ptr->next;
 free(ptr);
}
void search_element(node *start,int ele)
{
 node *ptr;
 int flag=0;
 ptr = start;
 while (ptr !=NULL)
 {
     if(ptr->info==ele)
     {
         flag=1;
         break;
     }
     else
    {
        ptr = ptr -> next;
    }
 }
 if (flag == 1)
 {
     printf("\nElement is PRESENT!!");
 }
 else
 {
     printf("\nElement is not found!!");
 }
}
void selection_sort(node *s)
{
 int min;
 node *currentpt,*nextpt,*minpt;
 currentpt = s;
 while(currentpt -> next!=NULL)
 {
     min= currentpt -> info;
     minpt = currentpt;
     nextpt = currentpt ->next;
 while(nextpt !=NULL)
 {
     if(nextpt ->info<min)
     {
        min = nextpt -> info;
        minpt = nextpt;
     }
     nextpt = nextpt ->next;
 }
 if(min!= currentpt -> info)
 {
     minpt -> info= currentpt->info;
     currentpt -> info = min; }
     currentpt= currentpt -> next;
 }
}
