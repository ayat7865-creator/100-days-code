Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {
int n, i;
int positive_count = 0, negative_count = 0, zero_count = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++) {
if(arr[i] > 0) {
positive_count++;
} 
else if(arr[i] < 0) {
negative_count++;
} 
else {
zero_count++;
}
}
printf("\nTotal Positive elements = %d", positive_count);
printf("\nTotal Negative elements = %d", negative_count);
printf("\nTotal Zero elements = %d\n", zero_count);
return 0;
}