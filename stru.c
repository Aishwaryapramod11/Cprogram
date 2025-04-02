#include<stdio.h>
typedef struct{
int rollno;
char name[20];
float cgpa;
}student;
int main(){
student s1;
printf("\nenter the roll num:");
scanf("%d",&s1.rollno);
printf("\nenter the name:");
scanf("%s",s1.name);
printf("enter the cgpa:");
scanf("%f",&s1.cgpa);
printf("the student details:");
scanf("name:\t%s",s1.name);
printf("\n name:\t%s",s1.name);
printf("\n roll no:\t%d",s1.rollno);
printf("\n cgpa:\t%f",s1.cgpa);
return 0;
}
