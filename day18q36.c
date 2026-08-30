#include <stdio.h>
int main() {
int num1, num2, a, b, temp;
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
a = num1;
b = num2;
while (b != 0) {
temp = b;
b = a % b;
a = temp;
}
printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, a);
return 0;
}