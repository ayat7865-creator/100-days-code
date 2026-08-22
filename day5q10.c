#include<stdio.h>
int main()
{
int total_seconds;
int hours, minutes, seconds;
printf("Enter time in seconds: ");
if (scanf("%d", &total_seconds) != 1|| total_seconds < 0)
{
printf("Please emter a valid positive integar.\n");
return 1;
}
hours = total_seconds / 3600;
minutes = (total_seconds % 3600)/60;
seconds = total_seconds % 60;
printf("Formatted Time -> %02d ; %02d : %02d\n", hours, minutes, seconds);
return 0;}