#include <stdio.h>
#include <string.h>
int main()
{
   char s[50];
   int i;
   printf("Enter a string : ");
   scanf("%[^\n]", s);

   for (i = 0; i <= strlen(s); i++)
      if (s[i] >= 97 && s[i] <= 122)
         s[i] = s[i] - 32;

   printf("\nUpper Case String is : %s", s);
   return 0;
}
