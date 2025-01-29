#include<stdio.h>
int main(){
  int num1,num2,sum,sub,mult;
  char operation ;
  printf("enter two integers");
  scanf("%d%d",&num1,&num2);
  printf("select the operation");
  scanf(" %c",&operation);
  switch(operation){
  
  case '+':
  sum=num1+num2;
  printf("sum %d",sum);
  break;
  case '-':
  sub=num1-num2;
  printf(" sub %d",sub);
  break;
  case '*':
  mult=num1*num2;
  printf(" mult %d",mult);
  break;
  default:
  printf("error:");
  break;
  }
  return 0;
  }
     
  
  
