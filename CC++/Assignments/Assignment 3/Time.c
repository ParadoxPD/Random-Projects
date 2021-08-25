/*Program to convert seconds to hours , minutes and seconds
*/

#include <stdio.h>

int main()
{

    int sec, min, hr;
    printf("Enter the Seconds : ");
    scanf("%d", &sec);

    min = sec / 60;
    sec %= 60;
    hr = min / 60;
    min %= 60;

    printf("%d hours %d minutes %d seconds\n", hr, min, sec);

    return 0;
}
