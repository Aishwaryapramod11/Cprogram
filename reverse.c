#include<stdio.h>
int main(){
   int length;
   char str1[25],temp;
   printf("enter the string");
   scanf("%s",str1);
   for(length=0;str1[length]!='\0';length++);
   int i =length-1;
   for(int j=0;j<length/2;j++){
    temp=str1[i];
   str1[i]=str1[j];
   str1[j]=temp;
   
   i--;
   }
   temp='\0';
   printf("the reverse of string is:%s",str1);
   return 0;
}

