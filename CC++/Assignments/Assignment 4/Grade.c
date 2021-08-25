
/*Grade Evaluation*/

#include <stdio.h>

int main()
{
    int marks, index;
    char grade;
    printf("Enter Marks : ");
    scanf("%d", &marks);
    index = marks / 10;

    switch (index)
    {

    case 10:
        grade = 'O';
        break;

    case 9:
        grade = 'O';
        break;
    case 8:
        grade = 'E';
        break;
    case 7:
        grade = 'A';
        break;
    case 6:
        grade = 'B';
        break;
    case 5:
        grade = 'C';
        break;
    default:
        grade = 'F';
        break;
    }

    printf("Grade : %c\n", grade);

    return 0;
}
