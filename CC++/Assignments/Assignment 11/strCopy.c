

#include <stdio.h>

char *copy(char *, char *);
int main()
{

    char s1[100], s2[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s1);
    copy(s1, s2);
    printf("The Copied String : %s", s2);
    return 0;
}

char *copy(char *source, char *dest)
{
    char *start = dest;

    while (*source != '\0')
    {
        *dest = *source;
        dest++;
        source++;
    }

    *dest = '\0';
    return start;
}
