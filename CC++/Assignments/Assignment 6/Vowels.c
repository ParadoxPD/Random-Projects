/* Vowels and Consonants*/

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter a Letter : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }

    return 0;
}
