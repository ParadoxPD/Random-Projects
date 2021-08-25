
/*Income Tax*/

#include <stdio.h>

int main()
{
   float income, tax = 0;
   printf("Enter Income : ");
   scanf("%f", &income);
   if (income >= 0 && income <= 150000)
   {
      tax = 0 * income;
   }
   else if (income > 150000 && income <= 300000)
   {
      tax = 0.1 * (income);
   }
   else
   {
      tax = 0.2 * (income);
   }

   printf(" tax : %f\n", tax);

   return 0;
}
