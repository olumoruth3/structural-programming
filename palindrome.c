#include <stdio.h>

int isPalindrome(int n) {
    int originalNumber = n;
    int reversedNumber = 0;

    while (n > 0) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int n;

    printf("Enter a number: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
