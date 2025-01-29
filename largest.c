#include<stdio.h>
int main(){
   int number1,number2,number3;
   printf("enter three integers:");
   scanf("%d %d %d",&number1,&number2,&number3);
   if(number1>number2){
      if (number1>number3){
        printf("largest is number1");
      }
    }
    else if(number2>number3){
       printf("largest is number2");
    }
    else{
       printf("largest is number3");
    }
    return 0;
             
}
   
   
   
   
  
