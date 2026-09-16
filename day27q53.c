Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include<stdio.h>
int main() {
int max_stars = 9;
for (int i = 1; i <= max_stars; i += 2) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
for (int i = max_stars - 2; i >= 1; i -= 2) {
for (int j = 1; j <= i; j++) { printf("*");
}
printf("\n");
}
return 0;
}