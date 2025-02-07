#include<stdio.h>
int main(){
  int row,col;
  printf("\n enter the number of rows and columns:");
  scanf("%d%d",&row,&col);
  int m1[row][col];
  printf("enter the elements:");
 
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    scanf("%d",&m1[i][j]);
    }
   
     
  }
  printf("transpose of matrix is:\n");
  for (int i=0;i<row;i++){
    for(int j=0;j<row;j++){
    printf("%d\t",m1[j][i]);
    }
    printf("\n");
  }
  return 0;
}
  
