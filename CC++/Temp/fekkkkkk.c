#include <stdio.h>
struct student
{
    char Name[50];
    int roll;
    float mk1,mk2,mk3;
} s[10];

int main()
{
    int i,num;
    printf("Enter total number of student: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Information for student %d", i+1);
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%[^\n]", &s[i].Name);
        printf("Enter marks for subject 1: ");
        scanf(" %f", &s[i].mk1);
        printf("Enter marks for subject 2: ");
        scanf("%f", &s[i].mk2);
        printf("Enter marks for subject 3: ");
        scanf("%f", &s[i].mk3);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < num; i++)
    {
        printf("For student %d", i+1);
        printf("\nRoll number: %d\n",s[i].roll );
        printf("Name: ");
        puts(s[i].Name);
        printf("Marks:\n");
        printf("Subject 1: %f \n", s[i].mk1);
        printf("Subject 2: %f \n", s[i].mk2);
        printf("Subject 3: %f \n", s[i].mk3);
        printf("\n");
    }
    return 0;
}
