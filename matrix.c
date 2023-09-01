#include <stdio.h>

void main() {
  // Declare the matrices
  int mat1[2][3], mat2[2][3], sum[2][3];

  // Get the number of rows and columns from the user
  int rows, cols;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Read the elements of the first matrix
  printf("Enter the elements of matrix 1:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("mat1[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  // Read the elements of the second matrix
  printf("Enter the elements of matrix 2:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("mat2[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  // Add the two matrices
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  // Print the result
  printf("The sum of the matrices is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
}
