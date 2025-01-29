#include<stdio.h>
int main(){
int num,fact;
  printf("enter a number:");
  scanf("%d",&num);
  fact=1;
  if(num>0){
    while(num>0){
    fact=fact*num;
    num-=1;
    }
    printf("factorial %d",fact);
  } else{
    printf("enter a postive num");
    }
    return 0;
}
