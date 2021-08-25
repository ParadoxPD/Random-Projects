/*Operations*/

#include <stdio.h>
main()
{
    int opr1, opr2, ans;
    char oper;

    printf("Enter the Value of Two Operators:");
    scanf("%d%d", &opr1, &opr2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oper);
    switch (oper)
    {
    case '+':
        ans = opr1 + opr2;
        break;
    case '-':
        ans = opr1 - opr2;
        break;
    case '*':
        ans = opr1 * opr2;
        break;
    case '/':
        ans = opr1 / opr2;
        break;
    }
    printf("%d", ans);
}