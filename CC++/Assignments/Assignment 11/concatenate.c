#include <stdio.h>
int main()
{
   char str1[10], str2[10], i, j;
   printf("Enter 1st string: ");
   scanf("%s",str1);
   printf("Enter 2nd string: ");
   scanf("%s",str2);

   for(i=0; str1[i]!='\0'; ++i);
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   str1[i]='\0';
   printf("\n%s",str1);

   return 0;
}
