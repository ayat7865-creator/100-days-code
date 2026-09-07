Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main() {
int numBlocks = 6; // total blocks
int block, stars, count;
for (block = 1; block <= numBlocks; block++) {
if (block == 1) {
count = 1;
} else if (block == 2) {
count = 2;
} else if (block == 3) {
count = 3;
} else if (block == 4) {
count = 5;
} else if (block == 5) {
count = 3;
} else { // block == 6
count = 1;
}
for (stars = 1; stars <= count; stars++) {
printf("*\n");
}
if (block != numBlocks) {
printf("\n");
}
}
return 0;
}