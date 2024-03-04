// Implement structures to read, write and compute average marks of the students, list the students scoring above and below the average marks for a class of N students.

#include <stdio.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
}student;

int main(void) {
    student s[10];
    int n;
    float sum = 0, average;
    printf("Enter the number of students details: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter the %d student details\n", i+1);
        printf("Enter roll number:  ");
        scanf("%d", &s[i].rollno);
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter the marks:    ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent deatails are\n");
    printf("\nRollno\t\tName\t\tMarks\n");
    for (int i = 0; i < n; i++)
        printf("%d\t\t%s\t\t%f\n", s[i].rollno, s[i].name, s[i].marks);
    for (int i = 0; i < n; i++)
        sum = sum + s[i].marks;
    average = sum / n;
    printf("\nAVERAGE = %f\n", average);
    printf("\nStudents scoring above average:\n");
    for (int i = 0; i < n; i++)
        if (s[i].marks >= average) 
            printf("%s\t", s[i].name);
    printf("\n\nStudents scoring below average:\n");
    for (int i = 0; i < n; i++)
        if (s[i].marks < average)
            printf("%s\t", s[i].name);
    printf("\n");
    return 0;
}