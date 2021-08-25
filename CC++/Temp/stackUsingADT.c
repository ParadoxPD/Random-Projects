//Implement a stack using an ADT//
#include<stdio.h>
#include<stdlib.h>
#define maxstk 10
typedef struct STACK
{
    int stk[maxstk],top;
}stack;
void push(stack *,int);
int pop(stack *);
void traverse(stack);
int main()
{
    stack s;
    s.top=-1;
    int opt,ele,i;
    while(1)
    {
        printf("\nInput\n1.push\n2.pop\n3.traverse\n4.exit\nYour Choice:");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("Enter element:");
            scanf("%d",&ele);
            push(&s,ele);
            break;
        case 2:
            ele=pop(&s);
            printf("Poped element is: %d",ele);
            break;
        case 3:
            traverse(s);
            break;
        case 4:
            exit(0);
        default:
            printf("No such option present");
        }
    }
    return 0;
}
void push(stack *s,int ele)
{
    if(s->top==maxstk-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        (s->top)++;
        s->stk[s->top]=ele;
    }
}
int pop(stack *s)
{
    int temp;
    if(s->top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        temp=s->stk[s->top];
        (s->top)--;
    }
    return temp;
}
void traverse(stack s)
{
    int i;
    printf("Elements in the stack are:\n");
    for(i=s.top;i>=0;i--)
    {
        printf("%d\t",s.stk[i]);
    }
}
