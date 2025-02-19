#include<stdio.h>
#include<string.h>
int main(){
 char str1[20];
 char str2[25];
 printf("enter the string 1");
 scanf("%s",str1);
 printf("enter string 2");
 scanf("%s",str2);
 printf("%d\n",strcmp(str1,str2));
 if(strcmp(str1,str2)==0){
 printf(" two strings are equal");
 }
 else{
 printf(" not equal");
 }
 return 0;
}
