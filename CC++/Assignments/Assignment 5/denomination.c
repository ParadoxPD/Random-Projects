/*Currency Denomination*/

#include <stdio.h>
int main()
{
    int amt, note;
    printf("Enter the total Amount of Money:");
    scanf("%d", &amt);

    if (amt >= 2000)
    {
        note = amt / 2000;
        printf("No. of 2000 denominations= %d\n", note);
        amt = (amt - (2000 * note));
    }
    if (amt >= 500)
    {
        note = amt / 500;
        printf("No. of 500 denominations= %d\n", note);
        amt = (amt - (500 * note));
    }
    if (amt >= 200)
    {
        note = amt / 200;
        printf("No. of 200 denominations= %d\n", note);
        amt = (amt - (200 * note));
    }
    if (amt >= 100)
    {
        note = amt / 100;
        printf("No. of 100 denominations= %d\n", note);
        amt = (amt - (100 * note));
    }
    if (amt >= 50)
    {
        note = amt / 50;
        printf("No. of 50 denominations= %d\n", note);
        amt = (amt - (50 * note));
    }
    if (amt >= 20)
    {
        note = amt / 20;
        printf("No. of 20 denominations= %d\n", note);
        amt = (amt - (20 * note));
    }
    if (amt >= 10)
    {
        note = amt / 10;
        printf("No. of 10 denominations= %d\n", note);
        amt = (amt - (10 * note));
    }
    if (amt >= 5)
    {
        note = amt / 5;
        printf("No. of 5 denominations= %d\n", note);
        amt = (amt - (5 * note));
    }
    if (amt >= 2)
    {
        note = amt / 2;
        printf("No. of 2 denominations= %d\n", note);
        amt = (amt - (2 * note));
    }
    if (amt >= 1)
    {
        note = amt / 1;
        printf("No. of 1 denominations= %d\n", note);
        amt = (amt - (1 * 1));
    }

    return 0;
}