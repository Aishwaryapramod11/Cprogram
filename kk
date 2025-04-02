include-stdio.h>

typedef struct(

int rollNo;

char name [20];

float cgpa;

}student;

int main(){

int limit;

student s[10];

printf("Enter the limit");

scanf("%d",&limit);

for(int i=0;i<limit;i++){

printf("\n Enter the roll number:");

scanf("%d",&s[1].rollNo);

printf("\n Enter the name:");

scanf("%s", s[i].name);

printf("\n Enter the CGPA:");

scanf("%f",&s[i].cgpa);

}

printf("\n The student details:");

for(int i=0;i<limit;i++){

printf("\n Name:\t%s",s[i].name);

printf("\n rollnumber:\t%d",s[i].rollNo);

printf("\n CGPA:\t%f",s[i].cgpa);

}

return 0;