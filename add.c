#include<stdio.h>
int main(){
 int i,j,row,col;
 printf("\n enter the number of rows and column");
 scanf("%d%d",&row,&col);
 
 int matrix[row][col];
 printf("enter the elements");
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    scanf("%d",&matrix[i][j]);
    }
 }
 int sum=0;
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    if(i==j){
    matrix[i][j]=0;
    }
  }

  printf("\n the matrix is:\n");
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
      printf("%d",matrix[i][j]);
      }
      printf("\n");
   
    }
    return 0;
}
  
