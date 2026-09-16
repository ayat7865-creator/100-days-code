Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int deleteElement(int arr[], int size, int targetIndex) {
if (targetIndex < 0 || targetIndex >= size) {
printf("Error: Index out of bounds. Deletion failed.\n");
return size;
}
for (int i = targetIndex; i < size - 1; i++) {
arr[i] = arr[i + 1];
}
return size - 1;
}
int main() {
int arr[100] = {10, 20, 30, 40, 50};
int size = 5;
int targetIndex = 2;
printf("Original array: ");
for (int i = 0; i < size; i++) printf("%d ", arr [i]);
printf("\n");
size = deleteElement(arr, size, targetIndex);
printf("Array after deletion: ");
for (int i = 0; i < size; i++) printf("%d ", arr[i]);
printf("\n");
return 0;
}