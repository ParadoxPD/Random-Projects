/*Program to create and use all the Linked List operations using Menu*/

#include <stdio.h>
#include <malloc.h>

struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;

node *input(node *);
void add_elements(node*);
void traverse(node *);
node *insert_first(node *);
void insert_last(node *);
node *insert_ith(node *);
node *delete_first(node *);
void delete_last(node *);
node *delete_ith(node *);
void search(node *);
void sort(node *);
node *reverse(node *);
void merge(node *, node *);

int count = 0;

int main()
{
    node *start = NULL;
    int ch, op;
    node *start2 = NULL;

    printf("Create a Linked List and do all related functions : \n\n");
    start = input(start);

    while (0)
    {

        printf("\n1.Create New List\n2.Add elements to list\n3.Traverse the list\n4.Insert at beginning\n5.Insert at end\n6.Insert at ith location\n7.Delete from beginning\n8.Delete from end\n9.Delete from ith location\n10.Search an element\n11.Sort the List\n12.Reverse the list\n13.Merge with another List\n\n");
        printf("Enter your Choice : ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                start = NULL;
                start = input(start);
                traverse(start);
                break;
            case 2:
                add_elements(start);
                traverse(start);
                break;
            case 3:
                traverse(start);
                break;
            case 4:
                traverse(start);
                printf("\n");
                start = insert_first(start);
                traverse(start);
                printf("\n");
                break;
            case 5:
                traverse(start);
                printf("\n");
                insert_last(start);
                traverse(start);
                printf("\n");
                break;
            case 6:
                traverse(start);
                printf("\n");
                start = insert_ith(start);
                traverse(start);
                printf("\n");
                break;
            case 7:
                traverse(start);
                printf("\n");
                start = delete_first(start);
                traverse(start);
                printf("\n");
                break;
            case 8:
                traverse(start);
                printf("\n");
                delete_last(start);
                traverse(start);
                printf("\n");
                break;
            case 9:
                traverse(start);
                printf("\n");
                start = delete_ith(start);
                traverse(start);
                printf("\n");
                break;
            case 10:
                traverse(start);
                printf("\n");
                search(start);
                printf("\n");
                break;
            case 11:
                traverse(start);
                printf("\n");
                sort(start);
                traverse(start);
                printf("\n");
                break;
            case 12:
                traverse(start);
                printf("\n");
                start = reverse(start);
                traverse(start);
                printf("\n");
                break;

            case 13:
                printf("Enter Next List :\n\n");
                start2 = NULL;
                start2 = input(start2);
                traverse(start);
                traverse(start2);
                printf("\n");
                merge(start, start2);
                traverse(start);
                printf("\n");
                break;

            default:
                printf("Invalid Operation");
        }

        printf("Enter 1 for next operation or 0 for Exiting : ");
        scanf("%d", &ch);
        if (ch != 1)
            break;
    }

    return 0;
}

node *input(node *S)
{
    node *temp;
    char ch = 'Y';
    if (S == NULL)
    {
        S = (node *)malloc(sizeof(node));
        printf("Enter data to first node : ");
        scanf("%d", &(S->info));
        count++;
    }
    temp = S;
    while (ch == 'Y' || ch == 'y')
    {
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        printf("\nEnter data for Next Node : ");
        scanf("%d", &(temp->info));
        count++;
        printf("\nEnter 'Y' to continue or Press 'N' to stop : ");
        scanf(" %c", &ch);
    }
    temp->next = NULL;
    return S;
}

void add_elements(node *start){

    node *ptr;
    char ch = 'Y';

    ptr = start;
    while(ptr->next!=NULL)
        ptr = ptr -> next;
    while (ch == 'Y' || ch == 'y')
    {
        ptr->next = (node *)malloc(sizeof(node));
        ptr = ptr->next;
        printf("\nEnter data for Next Node : ");
        scanf("%d", &(ptr->info));
        count++;
        printf("\nEnter 'Y' to continue or Press 'N' to stop : ");
        scanf(" %c", &ch);
    }
    ptr->next = NULL;


}
void traverse(node *start)
{
    node *ptr;
    ptr = start;
    printf("\nThe List is : \n");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}

void merge(node *A, node *B)
{
    node *C;
    C = A;
    while (A->next != NULL)
        A = A->next;

    A->next = B;
}

void sort(node *s)
{
    int min;
    node *current, *nextPtr, *minptr;
    current = s;
    while (current->next != NULL)
    {
        min = current->info;
        minptr = current;
        nextPtr = current->next;
        while (nextPtr != NULL)
        {
            if (nextPtr->info < min)
            {
                min = nextPtr->info;
                minptr = nextPtr;
            }
            nextPtr = nextPtr->next;
        }
        if (min != current->info)
        {
            minptr->info = current->info;
            current->info = min;
        }
        current = current->next;
    }
}

void delete_last(node *start)
{
    node *ptr = start;
    node *prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    printf("\nAfter deleting the Last element\n");
    printf("The New list is : \n");
}

node *delete_ith(node *start)
{
    int loc;
    int i;
    node *ptr = start;
    node *prev = NULL;
    printf("Enter the location : ");
    scanf("%d", &loc);
    count =0;
    for(count = 0;ptr!=NULL;count++)
        ptr=ptr->next;
    ptr = start;
    if ((count - 1) < loc)
    {
        printf("Ith node not present in list");
        return start;
    }
    if(loc==0)
    {
        return delete_first(start);

    }
    for (i = 0; i < loc; i++)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    printf("\nAfter deleting the Ith element\n");
    printf("The New list is: \n");
    return start;
}

node *delete_first(node *start)
{
    node *ptr = start;
    if (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    start = ptr;

    printf("\nAfter deleting the First element\n");
    printf("The New list is: \n");
    return start;
}


node *insert_first(node *ptr)
{
    node *data;
    data = (node *)malloc(sizeof(node));
    printf("Enter new element in the list : ");
    scanf("%d", &(data->info));
    data->next = ptr;
    ptr = data;
    return ptr;
}

void search(node *start)
{
    node *temp;
    int i;
    temp = start;
    printf("\nEnter the element you want to search : ");
    scanf("%d", &i);
    while (temp != NULL)
    {
        if (temp->info == i)
        {
            printf("\nElement is present.");
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (temp == NULL)
    {
        printf("\nElement is not present.\n");
    }
}

node *insert_ith(node *start)
{
    node *ptr, *newptr;
    int i, k = 1;
    printf("\nEnter the Location :: ");
    scanf("%d", &i);
    ptr = start;
    count =0;
    for(count = 0;ptr!=NULL;count++)
        ptr=ptr->next;
    ptr = start;
    if ((count - 1) < i)
    {
        printf("Ith node not present in list");
        return start;
    }
    if(i == 0)
        return insert_first(start);
    while (k < i)
    {
        ptr = ptr->next;
        k++;
    }
    newptr = (node *)malloc(sizeof(node));
    printf("\nEnter the value of the node : ");
    scanf("%d", &(newptr->info));

    newptr->next = ptr->next;
    ptr->next = newptr;
    printf("\nThe new List is :\n");
    return start;
}

void insert_last(node *ptr)
{
    node *data;

    data = (node *)malloc(sizeof(node));
    printf("\nEnter new element in the list : ");
    scanf("%d", &(data->info));
    data->next = NULL;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = data;
    printf("\nThe new List is :\n");
}

node *reverse(node *start)
{
    node *current, *prev, *nextptr;
    current = start;
    prev = current->next;
    current->next = NULL;
    while (prev != NULL)
    {

        nextptr = prev->next;
        prev->next = current;
        current = prev;
        prev = nextptr;
    }
    return current;
}
