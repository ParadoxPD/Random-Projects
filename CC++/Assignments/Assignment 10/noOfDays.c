/* Finding days */

#include <stdio.h>

int day(int, int);
int leapYear(int);
int main()
{
    int m, y;
    printf("Enter a month number : ");
    scanf("%d", &m);
    printf("Enter the year : ");
    scanf("%d", &y);
    printf("Number of days in that month is : %d", day(m, y));
    return 0;
}
int day(int m, int y)
{
    int d;
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapYear(y))
        months[1] = 29;

    return months[m - 1];
}
int leapYear(int year)
{
    return ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0));
}