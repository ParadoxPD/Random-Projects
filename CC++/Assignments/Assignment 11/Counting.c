#include <stdio.h>
#include <string.h>

void count(char[]);
int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%[^\n]", s);
    count(s);

    return 0;
}

void count(char s[])
{
    int i, len, c = 0;

    for (len = 0; s[len] != '\0'; len++)
        ;

    for (i = 0; i < len; i++)
        if (s[i] == 32)
            c++;

    printf("No of characters : %d\n", len);
    printf("No of words : %d\n", c + 1);
    printf("No of blank spaces : %d\n", c);
}