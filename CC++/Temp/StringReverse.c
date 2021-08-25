

//implementation of STACK using Structure //
#include <stdio.h>
#include <stdlib.h>
#define maxstk 100

typedef struct Stack
{

    int top;
    char val[maxstk];

} stack;

void push(stack *, char);
char pop(stack *);
void reverse(char[]);

int main()
{
    char S[10];
    char *T;
    printf("Enter a string :");
    scanf("%[^\n]", S);
    return 0;
}
void reverse(char S[])
{
    stack stk;
    stk.top = -1;
    int i, len = 10;
    char R[len];
    for (i = 0; S[i] != '\0'; i++)
        push(&stk, S[i]);
    for (i = 0; S[i] != '\0'; i++)
        R[i] = pop(&stk);
    R[i] = '\0';
    printf("%s", R);
}

void push(stack *stk, char ele)
{

    (*stk).top++;
    (*stk).val[(*stk).top] = ele;
}
char pop(stack *stk)
{
    char temp;

    temp = (*stk).val[(*stk).top];
    (*stk).top--;
    return temp;
}
