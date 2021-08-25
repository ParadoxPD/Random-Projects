/* Avg by entering 5 subjects marks
*/

#include <stdio.h>

int main()
{

    int m1, m2, m3, m4, m5;
    float avg;
    printf("Enter 5 Marks : ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Average of marks : %f\n", avg);

    return 0;
}
