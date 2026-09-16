Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
#include<limits.h>
int findSecondLargest(int arr[], int size) {
if (size < 2) {
return INT_MIN;
}
int first = INT_MIN;
int second = INT_MIN;

for(int i = 0; i < size; i++) {
if (arr[i] > first) {
second = first;
first = arr[i];
}
else if (arr[i] > second && arr[i] != first) {
second = arr[i];
}
}
return second;
}
int main() {
int arr[] = {12, 35, 1, 10, 34, 1};
int size = sizeof(arr) / sizeof(arr[0]);
int result = findSecondLargest(arr, size);
if (result == INT_MIN) {
printf("There is no second largest element.\n");
} else {
printf("The second largest elementis %d\n", result);
}
return 0;
}