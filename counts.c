#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("text.txt","r");
int wordCount=0,lineCount=0,sentCount=0;
char ch;
while(fscanf(fp,"%c",&ch)==1){
     if(ch==' '|| ch=='.'){
     
     wordCount++;
     }
     if(ch=='.'){
     sentCount++;
     }
     if(ch=='\n'){
     lineCount++;
     }
}
fclose(fp);
printf("words:%d\n",wordCount);
printf("sent:%d\n",sentCount);
printf("line :%d\n",lineCount);
return 0;
}



