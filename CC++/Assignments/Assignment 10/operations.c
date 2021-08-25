
/*Operations*/

#include <stdio.h>

float add(float,float );
float sub(float,float );
float mult(float,float );
float div(float,float);

int main()
{
    float opr1, opr2, ans;
    char oper;

    printf("Enter the Value of Two Operators : ");
    scanf("%f%f", &opr1, &opr2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oper);
    switch (oper)
    {
    case '+':
        ans = add(opr1, opr2);
        break;
    case '-':
        ans = sub(opr1, opr2);
        break;
    case '*':
        ans = mult(opr1, opr2);
        break;
    case '/':
        ans = div(opr1, opr2);
        break;
    }
    printf("%f", ans);

    return 0;
}

float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mult(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
