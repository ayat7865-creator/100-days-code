Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
void insertInSorted(int arr[], int *size, int capacity, int element) {
if (*size >= capacity) {
printf("Error: Array is full. Cannot insert element.\n");
return;
}
int i = *size - 1;
while (i >= 0 && arr[i] > element) {
arr[i + 1] = arr[i];
i--;
}
arr[i + 1] = element;
(*size)++;
}
int main() {
int arr[10] = {10, 20, 30, 40, 50};
int capacity = 10;
int size = 5;
int element = 25;
printf("Array before insertion: ");
for (int i = 0; i < size; i++) printf("%d ", arr[i]);
insertInSorted(arr, &size, capacity, element);
printf("Array after insertion: ");
for (int i = 0; i < size; i++) printf("%d ", arr[i]);
printf("\n");
return 0;
}