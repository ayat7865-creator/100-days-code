#include <stdio.h>
int main() {
int num, temp;
int binaryNum[32]; 
int i = 0;
printf("Enter an integer: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input.\n");
return 1;
}
temp = num;
if (num == 0) {
printf("Binary representation of 0 is: 0\n");
return 0;
}
if (num < 0) {
printf("Note: Processing absolute value for binary representation.\n");
num = -num;
}
while (num > 0) {
binaryNum[i] = num % 2;
num = num / 2;
i++;
}
printf("Binary representation of %d is: ", temp);
for (int j = i - 1; j >= 0; j--) {
printf("%d", binaryNum[j]);
}
printf("\n");
return 0;
}