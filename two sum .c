/*
 author: Aishwarya
 sum of two matrix
*/

#include<stdio.h>
int main(){
 int row,col,i,j;
 printf("\n enter the number of rows and column");
 scanf("%d%d",&row,&col);
 
 int m1[row][col],m2[row][col];
 int m3[row][col];
 printf("\nenter the first matrix:\n");
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
   scanf("%d",&m1[i][j]);
   }
 }
 printf("\nenter the second matrix:\n");
 for(int i=0;i<row;i++){
   for(int j=0;j<row;j++){
   scanf("%d",&m2[i][j]);
   }
 }
 for(int i=0;i<row;i++){
   for(int j=0;j<row;j++){
    m3[i][j]=m1[i][j]+m2[i][j];
    }
  }
  printf("the sum of two matrix is:\n");
  for(int i=0;i<row;i++){
   for(int j=0;j<row;j++){
   printf("%d\t",m3[i][j]);
   }
   printf("\n");
  }
  return 0;
}
  

