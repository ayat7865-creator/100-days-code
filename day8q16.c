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
