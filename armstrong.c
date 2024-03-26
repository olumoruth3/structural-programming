/* OLUMO RUTH
ENE212-0091/2021*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int originalNumber = n;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits
    while (n != 0) {
        n /= 10;
        numDigits++;
    }

    // Reset n to the original number
    n = originalNumber;

    // Calculate sum of digits raised to the power of numDigits
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
