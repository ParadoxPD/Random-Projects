


//Balanced palenthesis//
#include<stdio.h>
#include<stdlib.h>
#define maxstk 100


typedef struct Stack
{

    int top;
    char val[maxstk];


} stack;

char push(stack *,char );
char pop(stack *);
int eval(char[]);


int main()
{
    char S[10];
    int flag;
    printf("Enter a string :");
    scanf("%[^\n]",S);
    flag = eval(S);
    if(flag)
        printf("true");
    return 0;
}
int eval(char S[])
{
    stack stk;
    stk.top=-1;
    int i;
    for(i=0; S[i]!='\0'; i++)
    {
        if(S[i] == '(')
        {
            char c = push(&stk,S[i]);
            if(c=='\0')
                return 0;
        }
        else if(S[i] == ')')
        {
            char c = pop(&stk);
            if(c=='\0')
                return 0;
        }
    }
    return (stk.top == -1);
}

char push(stack *stk, char ele )
{
    if((*stk).top==maxstk-1)
    {
        return '\0';
    }
    else
    {
        (*stk).top++;
        (*stk).val[(*stk).top]=ele;
        return ele;
    }
}
char pop(stack *stk)
{
    char temp;
    if((*stk).top == -1)
        return '\0';
    else
    {
        temp=(*stk).val[(*stk).top];
        (*stk).top--;
    }
    return temp;
}

