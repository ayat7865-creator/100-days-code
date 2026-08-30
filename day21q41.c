Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
int num, originalNum, firstDigit, lastDigit;
int digitsCount = 0;
int multiplier = 1;
int swappedNum, middlePart;
printf("Enter any integer: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input.\n");
return 1;
}
originalNum = num;
if (num >= -9 && num <= 9) {
printf("Swapped number: %d\n", num);
return 0;
}
int isNegative = 0;
if (num < 0) {
isNegative = 1;
num = -num;
}
lastDigit = num % 10;
int temp = num;
while (temp >= 10) {
temp /= 10;
multiplier *= 10; 
}
firstDigit = temp;
middlePart = (num % multiplier) / 10;
swappedNum = (lastDigit * multiplier) + (middlePart * 10) + firstDigit;
if (isNegative) {
swappedNum = -swappedNum;
}
printf("Original number: %d\n", originalNum);
printf("Swapped number:  %d\n", swappedNum);
    return 0;
}