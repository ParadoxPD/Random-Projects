//Decimal to binary
#include <stdio.h>
#include <stdlib.h>
#define maxstk 100

typedef struct Stack
{

    int top;
    int val[maxstk];

} stack;

void push(stack *, int);
int pop(stack *);
int decimalToBinary(int);

int main()
{
    stack stk;
    int dec;
    stk.top = -1;
    printf("Enter a decimal no : ");
    scanf("%d", &dec);
    printf("The Binary Equivalent : %d", decimalToBinary(dec));

    return 0;
}
void push(stack *stk, int ele)
{
    (*stk).top++;
    (*stk).val[(*stk).top] = ele;
}
int pop(stack *stk)
{
    int temp;
    temp = (*stk).val[(*stk).top];
    (*stk).top--;
    return temp;
}

int decimalToBinary(int dec)
{
    int bin = 0, temp;
    stack stk;
    stk.top = -1;
    int i = 0;
    while (dec > 0)
    {
        push(&stk, dec % 2);
        dec /= 2;
    }

    for (i = stk.top; i >= 0; i--)
    {
        temp = pop(&stk);
        bin = bin * 10 + temp;
    }

    return bin;
}
