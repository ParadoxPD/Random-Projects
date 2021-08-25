#include <stdio.h>

int main()
{
    char s[100], sub[10];
    int len = 0, subLen = 0, c1 = 0, c2 = 0, i, j;

    printf("Enter a string : ");
    scanf("%[^\n]", s);
    printf("Enter Substring : ");
    scanf(" %[^\n]", sub);

    for (len = 0; s[len] != '\0'; len++)
        ;
    for (subLen = 0; sub[subLen] != '\0'; subLen++)
        ;

    for (i = 0; i <= len - subLen; i++)
    {
        c1 = 0;
        for (j = 0; j < subLen; j++)
            if (sub[j] == s[i + j])
                c1++;

        if (c1 == subLen)
            c2++;
    }

    if (c2 != 0)
        printf("Number of times the Substring is present : %d", c2);
    else
        printf("Sub string Not found");

    return 0;
}
