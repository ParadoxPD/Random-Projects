
//implementation of STACK using array (function) //
#include<stdio.h>
#include<stdlib.h>
#define maxstk 10
void push(int [],int,int*);
int pop(int [],int*);
void traverse(int[],int);

int main()
{
    int stk[maxstk],top=-1,ele,pele,opt,i;
    while(1)
    {
        printf("\ninput\n 1.push()\n 2.pop()\n 3.traverse()\n 4.exit()\n\nYour Choice : \n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("insert element to stack :\n");
            scanf("%d",&ele);
            push(stk,ele,&top);
            break;
        case 2:
            ele=pop(stk,&top);
            printf("the poped element is %d\n",ele);
            break;
        case 3:
            traverse(stk,top);
            printf("\n");
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Operation\n");
        }
    }
    return 0;
}
void push(int stk[], int ele, int *top )
{
    if(*top==maxstk-1)
        printf("stack is full\n no elements can be inserted\n");
    else
    {
        (*top)++;
        stk[*top]=ele;
    }
}
int pop(int stk[],int *top)
{
    int temp;
    if(*top==-1)
        printf("the stack is empty\n");
    else
    {
        temp=stk[*top];
        (*top)--;
    }
    return temp;
}
void traverse(int stk[],int top)
{
    int i;
    printf("\nthe element of stack\n\n");
    for(i=top; i>=0; i--)
        printf("%d\t",stk[i]);

}
