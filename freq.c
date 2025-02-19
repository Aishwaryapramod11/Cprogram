#include<stdio.h>
int main(){
  char string[500];
  int freq[26]={0};
  printf("\n enter the string ");
  fgets(string,sizeof(string),stdin);
  for(int i=0;string[i]!='\0';i++){
     char ch =string[i];
     if(string[i]>='A'&& string[i]<='Z'){
        
        ch =ch+32;
    }
    if(ch>='a'&& ch<='z'){
       freq[ch-97]++;
    }
  }
  for(int i=0;i<26;i++){
   if(freq[i]!=0){
    printf("%c:%d\n", i+97,freq[i]);
    }
  }
  return 0;
}


