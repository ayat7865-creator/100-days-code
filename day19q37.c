Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int findGCD(int a, int b) {
while (b != 0) {
int temp = b;
b = a % temp;
a = temp;
}
return a;
}
int main() {
int num1, num2, gcd, lcm;
printf("Enter two positive integers: ");
scanf("%d %d", &num1, &num2);
gcd = findGCD(num1, num2);

/* 
Calculate LCM using the formula: (num1 * num2) / gcd
*/
lcm = (num1 / gcd) * num2; 
printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
return 0;
}