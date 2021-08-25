#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i, len, c = 0;

    printf("Enter a string : ");
    scanf("%[^\n]", s);

    for (len = 0; s[len] != '\0'; len++)
        ;

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            c = 1;
            break;
        }
    }

    if (c == 0)
        printf("%s is a palindrome", s);

    else
        printf("%s is not a palindrome", s);

    return 0;
}
