#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a String : ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; ++i)
        ;

    printf("Length of the string : %d", i);
    return 0;
}
