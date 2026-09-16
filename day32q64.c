#include <stdio.h>

int main() {
long long n;
int freq[10] = {0};
printf("Enter an integer: ");
scanf("%lld", &n);
if (n < 0) {
n = -n;
}
if (n == 0) {
freq[0]++;
}
while (n > 0) {
int digit = n % 10;
n /= 10;
}
int max_freq = 0;
int most_frequent_digit = 0;
for (int i = 0; i < 10; i++) {
if (freq[i] > max_freq) {
max_freq = freq[i];
most_frequent_digit = i;
}
}
printf("The digit that occurs the most is %d (appeared %d times).\n", 
most_frequent_digit, max_freq);
return 0;
}