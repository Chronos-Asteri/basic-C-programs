// Write a program to display Student details using Structures.

#include <stdio.h>

#define MAX_SIZE 100

struct student_details
{
    char name[MAX_SIZE];
    char rollno[MAX_SIZE];
    float cgpa;
    char phonenumber[MAX_SIZE];

} std[2];

int main() 
{

    printf("Entering student details \n");

    for (int i = 0; i < 2; i++)
    {
        printf("Entering student %d details \n", i+1);

        printf("Name : ");
        scanf("%s", &std[i].name);

        printf("Roll Number : ");
        scanf("%s", &std[i].rollno);

        printf("CGPA : ");
        scanf("%f", &std[i].cgpa);

        printf("Phone Number : ");
        scanf("%s", &std[i].phonenumber);

        printf("\n");
    }

    printf("\n");
    /* Printing Details */

    for (int i = 0; i < 2; i++)
    {
        printf("Details of student %d \n", i+1);
        printf("Name : %s \n", std[i].name);
        printf("Roll Number : %s \n", std[i].rollno);
        printf("CGPA : %f \n", std[i].cgpa);
        printf("Phone Number : %s \n", std[i].phonenumber);
        printf("\n");

    }

    return 0;
}