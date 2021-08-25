#include <stdio.h>
int main()
{
    int a = 4, b, c, d;
    b = ++a + a++;
    a = 4;
    c = ++a + ++a;
    a = 4;
    d = a++ + a++;
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}