Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
#include <stdlib.h> 
int main() {
long long num, originalNum;
long long product = 1;
int digit;
int hasOddDigit = 0;
printf("Enter an integer: ");
if (scanf("%lld", &num) != 1) {
printf("Invalid input. Please enter a valid integer.\n");
return 1;
}
originalNum = num; 
long long tempNum = abs(num);
if (tempNum == 0) {
hasOddDigit = 0;
}
while (tempNum > 0) {
digit = tempNum % 10; 
if (digit % 2 != 0) {
product *= digit; 
hasOddDigit = 1;  
}
tempNum /= 10; 
}
if (hasOddDigit) {
printf("The product of the odd digits in %lld is: %lld\n", originalNum, product);
} else {
printf("There are no odd digits in %lld (product is 0).\n", originalNum);
}
return 0;
}