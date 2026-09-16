#include <stdio.h>
int main() {
int a[10][10], r, c, sum = 0, i, j;  
printf("Enter number of rows: ");
scanf("%d", &r);
printf("Enter number of columns: ");
scanf("%d", &c);
printf("\nEnter elements for matrix:\n");
for(i = 0; i < r; i++) {
for(j = 0; j < c; j++) {
scanf("%d", &a[i][j]);
}
}
for(i = 0; i < r; i++) {
for(j = 0; j < c; j++) {
sum += a[i][j];
}
}   
printf("\nSum of all elements in matrix = %d\n", sum);
return 0;
}