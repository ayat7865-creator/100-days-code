#include<stdio.h>
int main() {
double num1, num2;;
char op;
if (scanf("%1f %1f %c", &num1, &num2, &op) != 3) {
printf("Error: Invalid input format.\n");
return 1;
}
switch (op) {
case '+':
printf("%.0f\n", num1 + num2);
break;
case '-':
printf("%.0f\n", num1 - num2);
break;
case '*':
printf("%.0f\n", num1 * num2);
break;
case '/':
if (num2 ==0) {
printf("Error: Divison by zero is not allowed.\n");
} else {
printf("%.0\n", num1 / num2);
}
break;
case '%':
if ((int)num2 ==0) {
printf("Error: Divison by zero is not allowed.\n");
} else {
printf("%d\n", (int)num1 % (int)num2);
}
break;
default:
printf("Error: Invalid operator '%c'.\n", op);
}
return 0;
}