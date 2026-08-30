Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
int num, originalNum, remainder;
int sum = 0;
printf("Enter an integer: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input. Please enter a valid integer.\n");
return 1;
}
originalNum = num;
num = abs(num);
while (num > 0) {
remainder = num % 10; 
sum += remainder;     
num = num / 10;        
}
printf("The sum of the digits of %d is: %d\n", originalNum, sum);
return 0;
}