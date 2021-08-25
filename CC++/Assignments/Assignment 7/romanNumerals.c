/*Roman Numerals from 1 to 50*/

#include <stdio.h>
int main()
{
  int i, temp;
  for (i = 1; i <= 50; i++)
  {
    temp = i;
    if (temp > 1)
      printf("\t");
    if (temp == 50)
    {
      printf("L");
      continue;
    }
    if (temp >= 40)
    {
      printf("XL");
      temp %= 40;
      if (temp == 0)
        continue;
    }
    if (temp >= 30)
    {
      printf("XXX");
      temp %= 30;
      if (temp == 0)
        continue;
    }
    if (temp >= 20)
    {
      printf("XX");
      temp %= 20;
      if (temp == 0)
        continue;
    }
    if (temp >= 10)
    {
      printf("X");
      temp %= 10;
      if (temp == 0)
        continue;
    }

    if (temp == 9)
    {
      printf("IX");
      continue;
    }

    if (temp >= 5)
    {
      printf("V");
      temp %= 5;
      if (temp == 0)
        continue;
    }

    if (temp == 4)
      printf("IV");

    if (temp == 3)
      printf("III");

    if (temp == 2)
      printf("II");

    if (temp == 1)
      printf("I");
  }

  return 0;
}
