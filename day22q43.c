Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main() {
int num, originalNum, rem, sum = 0;
long fact;
printf("Enter an integer to check for Strong Number: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input. Please enter a valid integer.\n");
return 1;
}
originalNum = num;
if (num < 0) {
printf("%d is not a Strong Number.\n", num);
return 0;
}
while (num > 0) {
rem = num % 10;
fact = 1;
for (int i = 1; i <= rem; i++) {
fact *= i;
}
sum += fact;     
num /= 10;
}
if (sum == originalNum) {
printf("%d is a Strong Number.\n", originalNum);
} else {
printf("%d is not a Strong Number.\n", originalNum);
}
return 0;
}