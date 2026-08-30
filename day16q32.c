Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
int num, originalNum, remainder;
int reversedNum = 0;
printf("Enter an integer: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input. Please enter a valid integer.\n");
return 1;
}
originalNum = num;
if (num < 0) {
printf("%d is not a palindrome number.\n", originalNum);
return 0;
}
while (num != 0) {
remainder = num % 10;
reversedNum = reversedNum * 10 + remainder;
num /= 10;
}
if (originalNum == reversedNum) {
printf("%d is a palindrome number.\n", originalNum);
} else {
printf("%d is not a palindrome number.\n", originalNum);
}
return 0;
}