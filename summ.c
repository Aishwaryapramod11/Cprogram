#include<stdio.h>

int main(){
    int i, j, row, col;
    printf("\nEnter the number of rows and columns: ");
    scanf("%d%d", &row, &col);
    int matrix[row][col];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            if(i == j){
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("\n The matrix is:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of the diagonal elements is: %d\n", sum);
  
   return 0;
}

