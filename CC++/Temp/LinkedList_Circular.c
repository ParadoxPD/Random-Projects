
// Creating circular single linked list //
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    int info;
    struct node *next;
} node;
node * create(node *);
void traverse(node *);
int main()
{
    node *START;
    START = NULL;
    START = create(START);
    printf("\nElements of the list are :: \n");
    traverse(START);
    return 0;
}
node * create(node * start)
{
    node *temp;
    char ch = 'y';
    if(start == NULL)
    {
        start = (node *) malloc(sizeof(node));
        printf("\nEnter the value of 1st node :: ");
        scanf("%d",&(start->info));
    }
    temp = start;
    while(ch == 'y')
    {
        printf("\nEnter y to continue or n to end the list here :: ");
        scanf(" %c",&ch);
        if(ch == 'y')
        {
            temp->next = (node *) malloc(sizeof(node));
            temp = temp->next;
            printf("\nEnter element into the list :: ");
            scanf("%d",&(temp->info));
        }
        else
        {
            break;
        }
    }
    temp->next = start;
    return start;
}
void traverse(node * start)
{
    node * temp;
    temp = start;
    do
    {
       printf("%d\t",temp->info);
       temp = temp->next;
    } while (temp != start);

}
