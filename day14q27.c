#include <stdio.h>
int main() {
int n, sum = 0;
int current_odd = 1;
printf("Enter the value of n: ");
if (scanf("%d", &n) != 1) {
printf("Invalid input.\n");
return 1;
}
for (int i = 0; i < n; i++) {
sum += current_odd;
current_odd += 2;
}
printf("Output: %d\n", sum);
return 0;
}