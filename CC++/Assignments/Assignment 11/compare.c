#include <stdio.h>

int main()
{
   char s1[20], s2[20];
   int i;
   printf("Enter 1st String : ");
   gets(s1);
   printf("Enter 2nd String : ");
   gets(s2);
   i = 0;
   while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
      i++;
   if (s1[i] > s2[i])
      printf("s1 > s2");
   else if (s1[i] < s2[i])
      printf("s1 < s2");
   else
      printf("s1 = s2");

   return (0);
}
