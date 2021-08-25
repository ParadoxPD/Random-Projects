
// Adding a node at the beginning  //
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    int info;
    struct NODE * next;
} node;
void insert(node *);
void traverse(node *);
int main()
{
     node *START, *temp;
    int res;
    START = (node *) malloc(sizeof(node));
    printf("\nEnter new element in the list : ");
    scanf("%d", &(START->info));
    START->next = NULL;
    temp = START;
    while (1)
    {
        printf("\nEnter 1 to continue or enter 0 to stop the list here : ");
        scanf(" %d", &res);
        if (res)
        {
            temp->next = (node*) malloc(sizeof(node));
            temp = temp->next;
            printf("\nEnter new element in the list : ");
            scanf("%d",&(temp->info));
        }
        else
            break;

    }
    temp->next = NULL;
    printf("\nThe list is :: \n");
    traverse(START);
    printf("\n");
    insert(START);
    printf("\nThe new list is :: \n");
    traverse(START);
    printf("\n");
    return 0;
}
void traverse(node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\t",(ptr->info));
        ptr = ptr->next;
    }
}

void insert(node * ptr)
{
    node *data;

    data = (node*) malloc(sizeof(node));
    printf("\nEnter new element in the list : ");
    scanf("%d",&(data->info));
    data->next = NULL;
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = data;

}
