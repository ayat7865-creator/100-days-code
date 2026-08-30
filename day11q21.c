#include<stdio.h>
int main()
{
int month;
printf("Enter month number (1-12): ");
if (scanf("%d", &month) != 1) {
printf("Invalid input. Please enter an integer.\n");
return 1;
}
switch(month) {
case 1:
printf("Month: January\nDays: 31\n");
break;
case 2:
printf("Month: February\nDays: 30\n");
break;
case 3:
printf("Month: March\nDays: 31\n");
break;
case 4:
printf("Month: April\nDays: 30\n");
break;
case 5:
printf("Month: May\nDays: 31\n");
break;
case 6:
printf("Month: June\nDays: 30\n");
break;
case 7:
printf("Month: July\nDays: 31\n");
break;
case 8:
printf("Month: August\nDays: 30\n");
break;
case 9:
printf("Month: September\nDays: 31\n");
break;
case 10:
printf("Month: October\nDays: 30\n");
break;
case 11:
printf("Month: November\nDays: 31\n");
break;
case 12:
printf("Month: December\nDays: 30\n");
break;
default:
printf("Invalid input! Please enter a month number between 1 and 12.\n");
break;
}
return 0;
}