include <stdio.h>
int main()
{
float length, breadth, area, perimeter;
printf("Enter the length of the rectangle: ");
scanf("%f", &length);
printf("Enter the breadth of the rectangle: ");
scanf("%f", breadth);
area = length * breadth;
perimeter = 2 * (lenegth + breadth);
printf("\n---Results---n\");
printf("Area of a rectangle: %2f sq. units\n", area);
printf("Perimeter of the rectangle: %2f units\n", perimeter);
return 0;
}