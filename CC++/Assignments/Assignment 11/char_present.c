#include <stdio.h>
#include <string.h>

int main()
{
    char ch, s[50];
    int i, c = 0;

    printf("Enter a String : ");
    scanf("%[^\n]", s);
    printf("Enter character : ");
    scanf(" %c", &ch);

    for (i = 0; i < strlen(s); i++)
        if (s[i] == ch)
            c = 1;

    if (c == 1)
        printf("\nCharacter is PRESENT");

    else
        printf("Character is NOT PRESENT\n");

    return 0;
}
