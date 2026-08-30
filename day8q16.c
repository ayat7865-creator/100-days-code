Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main() {
double num1, num2, num3;
if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
printf("Invalid input.\n");
return 1;
}
if (num1 >= num2) {
if (num1 >= num3) {
printf("Largest is %.0f\n", num1);
} else {
printf("Largest is %.0f\n", num3);
}
} else {
if (num2 >= num3) {
printf("Largest is %.0f\n", num2);
} else {
printf("Largest is %.0f\n", num3);
}
}
return 0;
}