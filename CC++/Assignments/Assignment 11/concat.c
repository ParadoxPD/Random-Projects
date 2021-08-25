/*Concatenate two strings*/

#include <stdio.h>

void concat(char[], char[]);
int main()
{
    char s1[100], s2[100];
    printf("Enter a string 1 : ");
    scanf("%[^\n]", s1);
    printf("Enter a string 2 : ");
    scanf(" %[^\n]", s2);
    concat(s1, s2);

    return 0;
}

void concat(char s1[], char s2[])
{
    int i = 0, j = 0;
    char s3[200];
    while (s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++;
        j++;
    }
    s3[i] = ' ';
    j++;
    i = 0;
    while (s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    printf("\nConcatenated string : %s", s3);
}
