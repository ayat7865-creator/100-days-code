#include <stdio.h>
int main() {
int rows, cols;
int matrix1[10][10], matrix2[10][10], sum[10][10];
printf("Enter the number of rows and columns (max 10): ");
scanf("%d %d", &rows, &cols);
printf("\nEnter elements of the first matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("Element [%d][%d]: ", i, j);
scanf("%d", &matrix1[i][j]);
}
}
printf("\nEnter elements of the second matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("Element [%d][%d]: ", i, j);
scanf("%d", &matrix2[i][j]);
}
}
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
sum[i][j] = matrix1[i][j] + matrix2[i][j];
}
}
printf("\nResultant Matrix (Sum):\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d\t", sum[i][j]);
}
printf("\n");
}
return 0;
}