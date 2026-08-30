Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
if (n <= 1) {
return false;
}    
if (n == 2) {
return true;
}   
if (n % 2 == 0) {
return false;
}   
for (int i = 3; i * i <= n; i += 2) {
if (n % i == 0) {
return false;
}
}
return true;
}
int main() {
int num;  
printf("Enter a positive integer: ");
if (scanf("%d", &num) != 1) {
printf("Invalid input. Please enter an integer.\n");
return 1;
}
if (isPrime(num)) {
printf("%d is a prime number.\n", num);
} else {
printf("%d is NOT a prime number.\n", num);
}
return 0;
}