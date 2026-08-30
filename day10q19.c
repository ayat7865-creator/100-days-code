#include<stdio.h>
int main()
{
double side1, side2, side3;
printf("Enter the lengths of the three sides of the triangle: ");
if (scanf("%1f %1f %1f", &side1, &side2, &side3) != 3) {
printf("Error: Invalid numerical input.\n");
return 1;
}
if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side3)) {
if (side1 == side2 && side2 == side3) {
printf("The triangle is Equilateral.\n");
}
else if (side1 == side2 || side1 == side3 || side2 == side3) {
printf("The triangle is Isoceles.\n");
}
else {
printf("The triangle is Scalene.\n");
}
} else {
printf("The entered sides do not form a valid triangle.\n");
}
return 0;
}