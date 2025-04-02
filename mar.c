#include<stdio.h>
typedef struct student{
int rollNo;
char name [20];
float mark1,mark2,mark3;
}student;
 int main(){
 float avgmarks,total=0;
  int limit;
 student s[10];
 printf("Enter the limit");
 scanf("%d",&limit);
  for(int i=0;i<limit;i++){
 printf("\n Enter the roll number:");
 scanf("%d",&s[i].rollNo);
 printf("\n Enter the name:");
 scanf("%s", s[i].name);
 printf("\n Enter the marks in three sub:");
 scanf("%f%f%f",&s[i].mark1,&s[i].mark2,&s[i].mark3);
  }
 printf("\n The student details:");
 for(int i=0;i<limit;i++){
 printf("\n Name:\t%s",s[i].name);
 printf("\n rollnumber:\t%d",s[i].rollNo);
 printf("\n mark:\t%f%f%f",s[i].mark1,s[i].mark2,s[i].mark3);
 total= total+s[i].mark1+s[i].mark2+s[i].mark3;
 }
 printf("%f",total);
  avgmark=total/limit;
 printf("\n average mark:%f",avgmark);
 }

return 0;
}
