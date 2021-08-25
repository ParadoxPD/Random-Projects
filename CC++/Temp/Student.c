#include<stdio.h>
#define MAX 5
#define MAX_NAME_SIZE 100
#define MAX_STUDENTS 100

typedef struct student
{
    char Name[MAX_NAME_SIZE],SIC[8];
    int Roll;
    float marks[MAX];
} stud;


void input(stud[],int);
void display(stud[],int);

int main()
{
    stud students[MAX_STUDENTS];
    int size;
    printf("\n");
    printf("Enter the number of students : \n");
    scanf("%d",&size);
    printf("\n");
    input(students,size);
    display(students,size);

    return 0;

}

void input(stud students[],int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("Enter the Name of the student : \n");
        scanf("%s",students[i].Name);
        printf("Enter the roll number of the student : \n");
        scanf("%d",&students[i].Roll);
        printf("Enter the SIC : \n");
        scanf("%s",students[i].SIC);

        printf("Enter the marks in the subjects : \n");
        for(j=0; j<MAX; j++)
        {
            printf("%d. ",j+1);
            scanf("%f",&students[i].marks[j]);
        }
        printf("\n");
    }

}
void display(stud students[],int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("Name of the Student  : %s\n",students[i].Name);
        printf("Roll number of the student : %d\n",students[i].Roll);
        printf("SIC of the student : %s\n",students[i].SIC);
        printf("Marks of the student : \n");
        for(j=0; j<MAX; j++)
            printf("%d. %f\n",j+1,students[i].marks[j]);
        printf("\n");
        printf("\n");
    }
}
