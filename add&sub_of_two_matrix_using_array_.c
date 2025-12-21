//ADDITION AND SUBTRACTION OF TW0 MATRIX
//USING ARRAY
#include <stdio.h>

int main() {
    int row, column,d;
    
    printf("Enter row and column: ");
    scanf("%d %d", &row, &column);
    
    int matrix_B[row][column];
    int matrix_A[row][column];
    
    printf("\nMATRIX_A\n");
    for(int i = 0; i < row; i++) {
      for(int j = 0; j < column; j++) {
          printf("Element of matrix_A[%d][%d]:",i,j);
          scanf("%d", &matrix_A[i][j]);
        }
      }
     
      printf("\nMATRIX_B\n");
      for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
          printf("Element of matrix_B[%d][%d]:",i,j);
          scanf("%d", &matrix_B[i][j]);
      }
    }
     printf("\nSUM OF MATRIX_A & MATRIX_B\n");
     for(int i=0;i<row;i++){
      for(int j=0;j<column;j++){
     d=matrix_A[i][j]+matrix_B[i][j];
      printf("%d\t",d);
      }
      printf("\n");
     }
     printf("\nSubtraction OF MATRIX_A & MATRIX_B\n");
     for(int i=0;i<row;i++){
      for(int j=0;j<column;j++){
     d=matrix_A[i][j]-matrix_B[i][j];
      printf("%d\t",d);
      }
      printf("\n");
     }

    return 0;
}