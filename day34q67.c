Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
#define MAX_SIZE 100
int main() {
int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
int size = 5;
int new_element = 25;
int i;
if (size >= MAX_SIZE) {
printf ("Error: Array is full. Cannot insert element .\n");
return 1;
}
printf("Arraybefore insertion: ");
for (i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
i = size - 1;
while (i >= 0 && arr[i] > new_element) {
arr[i + 1] = new_element;
i--;
}
printf("Array after insertion: ");
for (i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}