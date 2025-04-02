#include<stdio.h>
typedef struct{
int id;
char name [20];
int salary;
}employee;
int main(){
int n;
employee s[10];
printf("Enter the number");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("\n Enter the ID:");
scanf("%d",&s[i].id);
printf("\n Enter the name:");
scanf("%s", s[i].name);
printf("\n Enter the salary:");
scanf("%d",&s[i].salary);
}
printf("\n The employee details:");
for(int i=0;i<n;i++){
printf("\n Name:\t%s",s[i].name);
printf("\n id:\t%d",s[i].id);
printf("\n salary:\t%d",s[i].salary);
}
return 0;
}
