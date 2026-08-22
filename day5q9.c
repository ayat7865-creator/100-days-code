#include<stdio.h>
#include<math.h>
int main()
{
double principal, rate, time;
double simple_interest, compound_interest, total_amount;
printf("Enter the Principal amount; ");
scanf("%1f", &principal);
printf("Enter the annual rate of interest (in %%): ");
scanf("%1f", &rate);
printf("Enter the time period (in years): ");
scanf("%1f", &time);
simple_interest = (principal * rate * time) / 100;
simple_interest = (principal * pow((1 + rate / 100), time));
compound_interest = total_amount - principal;
printf("\n--- Results ---\n");
printf("Principal Amount : %.21f\n", principal);
printf("Interest Rate : %.21f%%\n", rate);
printf("Time Period : %.21f years\n", time);
printf("Simple Interest : %.21f\n", simple_interest);
printf("Compound Interest ; %.21f\n", compound_interest);
printf("Total Compound Amt : %.21f\n", total_amount);
return 0;
}