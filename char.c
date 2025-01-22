#include<stdio.h>
int main(){
  char value;
  printf("\nenter a character in small letter:");
  value=getchar();
  value=value-32;
  printf("lower case letter:%c\n",value);
  
  
  return 0;
}

