#include "stdio.h"
int i = 0;
struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[55];
void add_student()
{
    printf("Add the Students Details\n");
    printf("Enter the first name of student\n");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student\n");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained\n");
    scanf("%f", &st[i].cgpa);
    printf("Enter the course ID of each course\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &st[i].cid[j]);
    }
    i = i + 1;
}
