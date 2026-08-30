#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
char binary[MAX_SIZE];
char onesComplement[MAX_SIZE];
int i, isValid = 1;
printf("Enter a binary number: ");
scanf("%99s", binary); // Safely read up to 99 characters to prevent buffer overflow
int length = strlen(binary);
for(i = 0; i < length; i++) {
if(binary[i] == '1') {
onesComplement[i] = '0';
} 
else if(binary[i] == '0') {
onesComplement[i] = '1';
} 
else {
isValid = 0;
break;
}
}
onesComplement[length] = '\0';
if(isValid) {
printf("\nOriginal Binary:   %s\n", binary);
printf("1's Complement:    %s\n", onesComplement);
} else {
printf("\nError: Invalid input! Please enter only 0s and 1s.\n");
}
return 0;
}
