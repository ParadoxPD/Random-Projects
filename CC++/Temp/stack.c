
// Stack //
#include<stdio.h>
#include<stdlib.h>
#define MAXSTK 10
int main()
{
    int STK[MAXSTK],top = -1;
    int i,ele,pele,opt;
    while(1)
    {
        printf("Input \n1. PUSH() \n2. POP() \n3. TRAVERSE() \n4. EXIT()\n\n\nYour Choice : \n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            if(top==MAXSTK-1)
                printf("Stack is full.\n");
            else
            {
                printf("Insert the elements into the stack :: ");
                top++;
                scanf("%d",&ele);
                STK[top]=ele;
            }
            break;
        case 2:
            if(top==-1)
                printf("The stack is empty.\n");
            else
            {
                ele=STK[top];
                top--;
            }
            printf("The popped element is :: %d",ele);
            printf("\n");
            break;
        case 3:

            printf("\nElements of the stack are :: \n\n");
            for(i=top; i>=0; i--)
                printf("%d \t",STK[i]);
            printf("\n");
            printf("\n");

            break;
        case 4:
            exit(0);

        default:
            printf("Wrong Operation");
        }

    }
    return 0;

}
