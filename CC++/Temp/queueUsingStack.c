
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void enqueue(int[], int *, int *, int);
int dequeue(int[], int *, int *);
void traverse(int[], int, int);
void push(int[], int, int *);
int pop(int[], int *);

int main()
{
    int que[MAX];
    int front = -1, rear = -1, ele = 0;
    int opt;

    while (1)
    {
        printf("\nInput\n1.Enqueue()\n2.Dequeue()\n3.Traverse()\n4.Exit()\nYour choice :: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("Insert element  into the queue :: ");
            scanf("%d", &ele);
            enqueue(que, &front, &rear, ele);
            break;
        case 2:
            ele = dequeue(que, &front, &rear);
            printf("The deleted element is :: %d", ele);
            break;
        case 3:
            traverse(que, front, rear);
            break;
        case 4:
            exit(0);
        default:
            printf("There is no option to  be executed .\n");
        }
    }

    return 0;
}

void enqueue(int que[], int *f, int *r, int e)
{
    if ((*f == -1) && (*r == -1))
    {
        *f = *r = 0;
        que[*r] = e;
    }
    else if (*r == MAX - 1)
    {
        printf("\nQueue is full.\n\n");
        return;
    }
    else
    {
        (*r)++;
        que[*r] = e;
    }
}

int dequeue(int que[], int *f, int *r)
{
    int ele;
    if ((*f == -1) && (*r == -1))
    {
        printf("\nNo elements present .\n\n");
        return;
    }
    else if ((*f) == (*r))
    {
        ele = que[*f];
        *f = *r = -1;
    }
    else
    {
        ele = que[*f];
        (*f)++;
    }
    return ele;
}

void traverse(int que[], int f, int r)
{
    int i;
    printf("\nThe elements of the queue :: \n");
    if (f == -1)
        return;
    for (i = f; i <= r; i++)
        printf("%d \t", que[i]);
    printf("\n");
}

void push(int stk[], int ele, int *top)
{
    if (*top == MAX - 1)
        printf("stack is full\n no elements can be inserted\n");
    else
    {
        (*top)++;
        stk[*top] = ele;
    }
}
int pop(int stk[], int *top)
{
    int temp;
    if (*top == -1)
        printf("the stack is empty\n");
    else
    {
        temp = stk[*top];
        (*top)--;
    }
    return temp;
}
