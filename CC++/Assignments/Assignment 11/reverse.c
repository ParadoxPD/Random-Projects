#include <stdio.h>

int main()
{
   char s[100], temp;
   int i, j;

   printf("Enter the string :");
   scanf("%[^\n]", s);

   for (i = 0; s[i] != '\0'; i++)
      ;
   j = 0;
   i--;
   while (i > j)
   {
      temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      i--;
      j++;
   }

   printf("\nstring in Reverse : %s", s);
   return (0);
}
