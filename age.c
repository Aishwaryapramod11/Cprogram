#include<stdio.h>
int main(){
   int ram_age,shyam_age,ajay_age;
   printf("enter there ages:ram,shyam,ajay");
   scanf("%d %d %d",&ram_age,&shyam_age,&ajay_age);
   if(ram_age<shyam_age){
      if (ram_age<ajay_age){
        printf("ram");
      }
    }
    else if(shyam_age<ajay_age){
       printf("shyam");
    }
    else{
       printf("ajay");
    }
    return 0;
             
}
   
   
   
   
  
