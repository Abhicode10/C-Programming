#include <stdio.h>

void multiply(int rows1, int cols1, int mat1[][cols1], int rows2, int cols2, int mat2[][cols2], int mul[][cols2]) {
  // Initialize the product matrix
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      mul[i][j] = 0;
    }
  }

  // Multiply the two matrices
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      for (int k = 0; k < cols1; k++) {
        mul[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}

void print_matrix(int rows, int cols, int mat[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  // Declare the matrices
  int mat1[3][3], mat2[3][3], mul[3][3];

  // Get the number of rows and columns of the matrices
  int rows1, cols1, rows2, cols2;
  printf("Enter the number of rows of matrix1: ");
  scanf("%d", &rows1);
  printf("Enter the number of columns of matrix1: ");
  scanf("%d", &cols1);
  printf("Enter the number of rows of matrix2: ");
  scanf("%d", &rows2);
  printf("Enter the number of columns of matrix2: ");
  scanf("%d", &cols2);

  // Check if the matrices can be multiplied
  if (cols1 != rows2) {
    printf("The matrices cannot be multiplied.\n");
    return 0;
  }

  // Read the elements of the matrices
  printf("Enter the elements of matrix1:\n");
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols1; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter the elements of matrix2:\n");
  for (int i = 0; i < rows2; i++) {
    for (int j = 0; j < cols2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  // Multiply the matrices
  multiply(rows1, cols1, mat1, rows2, cols2, mat2, mul);

  // Print the product matrix
  printf("The product of the matrices is:\n");
  print_matrix(rows1, cols2, mul);

  return 0;
}
