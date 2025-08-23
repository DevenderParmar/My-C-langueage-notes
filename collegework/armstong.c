#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Compute sum of nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10; // Get last digit
        result += (int)pow(remainder, n); // Explicitly cast to int
        originalNum /= 10; // Remove last digit
    }

    // Check if Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


