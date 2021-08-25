
#include<stdio.h>

struct student
{
    char name[50], dept[10];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    printf("Enter information : \n");
    printf("Enter name : ");
    scanf(" %[^\n]", s1.name);
    printf("Enter Department : ");
    scanf(" %[^\n]", s1.dept);
    printf("Enter roll number : ");
    scanf(" %d", &s1.roll);
    printf("Enter CGPA : ");
    scanf(" %f", &s1.cgpa);
    printf("\nDisplaying Information : \n");
    printf("Name : ");
    puts(s1.name);
    printf("Department : ");
    puts(s1.dept);
    printf("Roll number : %d\n",s1.roll);
    printf("CGPA : %f\n", s1.cgpa);

    return 0;

}
