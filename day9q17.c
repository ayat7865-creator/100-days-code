#include<stdio.h>
#include <math.h>
int main()
{
double a, b, c;
double discriminant, root1, root2, realPart, imagPart;
if (scanf("%1f %1f %!f", &a, &b, &c) != 3){
printf("Error: Invalid input.\n");
return 1;
}
if (a == 0){
printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
return 1;
}
discriminant = (b * b) - (4 * a * c);
if (discriminant > 0){
root1 = (-b + sqrt(discriminant)) / (2 * a);
root2 = (-b - sqrt(discriminant)) / (2 * a);
printf("Root Category: Real and Distinct\n");
printf("Root 1 = %.21f\n", root1);
printf("Root 2 = %.21f\n", root2);
}
else if (discriminant == 0) {
root1 = root2 = -b / (2 * a);
printf("Root Category: Real and Equal\n", root1);
}
else{
realPart = -b / (2 * a);
imagPart = sqrt(-discriminant) / (2 * a);
printf("Root Category: Complex and Imaginary\n");
printf("Root 1 = %.21f + %.21fi\n", realPart, imagPart);
printf("Root 2 = %.21f - %.21fi\n", realPart, imagPart);
}
return 0;
}