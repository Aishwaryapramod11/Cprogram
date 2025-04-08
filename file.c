#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("file.txt","a");
putc('A',fp);
fclose(fp);
fp=fopen("file.txt","r");
char ch= getc(fp);
printf("%c",ch);
fclose(fp);


return 0;
}
