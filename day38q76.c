#include <stdio.h>
int main() {
int rows, cols;
int matrix[100][100];
int isSymmetric = 1; 
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &cols);
if (rows != cols) {
printf("The matrix is NOT symmetric (It must be a square matrix).\n");
return 0;
}
printf("Enter elements of the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &matrix[i][j]);
}
}
for (int i = 0; i < rows; i++) {
for (int j = i + 1; j < cols; j++) {
if (matrix[i][j] != matrix[j][i]) {
isSymmetric = 0; // Found a mismatch
break;
}
}
if (!isSymmetric) {
break;
}
}
if (isSymmetric) {
printf("The matrix is a Symmetric Matrix.\n");
} else {
printf("The matrix is NOT a Symmetric Matrix.\n");
}
return 0;
}