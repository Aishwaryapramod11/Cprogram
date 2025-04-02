#include <stdio.h>
typedef struct {
    int rollno;
    char name[20];
    float m1, m2, m3; 
} student;
int main() {
    int limit;
    float totalmark, avgmark;
    student s1[10];
    printf("Enter the number of students: ");
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++) {
        printf("\nEnter details student %d\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s1[i].rollno);
        printf("Enter name: ");
        scanf("%s", s1[i].name);
        printf("Enter marks1: ");
        scanf("%f", &s1[i].m1);
        printf("Enter marks2: ");
        scanf("%f", &s1[i].m2);
        printf("Enter marks3: ");
        scanf("%f", &s1[i].m3);
    }
    printf("\nStudent Details:\n");
    totalmark = 0;
    for (int i = 0; i < limit; i++) {
        printf("\nName: %s", s1[i].name);
        printf("\nRoll No: %d", s1[i].rollno);
        printf("\nMarks in M1: %f", s1[i].m1);
        printf("\nMarks in m2: %f", s1[i].m2);
        printf("\nMarks in m3: %f", s1[i].m3);
        totalmark += s1[i].m1 + s1[i].m2 + s1[i].m3;
    }
    avgmark = totalmark / limit; 
    printf("\nTotal Marks: %f", totalmark);
    printf("\nAverage Marks: %f\n", avgmark);

    return 0;
}
