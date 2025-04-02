#include<stdio.h>
typedef struct{
int rollno;
char name[20];
float cgpa;
}student;
int main(){
   student s[10];
   for(int i =0;i<10;i++){
   printf("\nenter the roll num:");
scanf("%d",&s[i].rollno);
printf("\nenter the name:");
scanf("%s",s[i].name);
printf("enter the cgpa:");
scanf("%f",&s[i].cgpa);
printf("the student details:");
scanf("name:\t%s",s[i].name);
printf("\n name:\t%s",s[i].name);
printf("\n roll no:\t%d",s[i].rollno);
printf("\n cgpa:\t%f",s[i].cgpa);
}
return 0;
}
