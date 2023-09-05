#include <stdio.h>

int main() {
    long long int number = 123456;
    int digitCounts[10] = {0}; // Initialize an array to store counts for each digit (0-9)

    // Count the occurrences of each digit
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        digitCounts[digit]++;   // Increment the count for that digit
        number /= 10;          // Remove the last digit
    }

    // Check if any digit appeared more than once
    int i;
    int digitAppearedMoreThanOnce = 0;
    for (i = 0; i < 10; i++) {
        if (digitCounts[i] > 1) {
            digitAppearedMoreThanOnce = 1;
            printf("Digit %d appeared %d times.\n", i, digitCounts[i]);
        }
    }

    if (!digitAppearedMoreThanOnce) {
        printf("No digit appeared more than once.\n");
    }

    return 0;
}

