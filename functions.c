#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ENE212-0091/2021
// RUTH OLUMO
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 != 0 && num1 >= num2 && fmod(num1, num2) == 0) {
        return num1 / num2;
    } else {
        printf("Error: Division conditions not met!\n");
        return 0; // Returning 0 as default in case of division by zero or conditions not met
    }
}

int main() {
    char operator;
    float num1, num2, result;

    do {
        printf("Enter first number:\n");
        if (scanf("%f", &num1) != 1) {
            printf("Error: Invalid input!\n");
            exit(1);
        }

        printf("Enter operator :\n");
        scanf(" %c", &operator);

        printf("Enter second number: \n");
        if (scanf("%f", &num2) != 1) {
            printf("Error: Invalid Input!\n");
            exit(1);
        }

        switch(operator) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                printf("Error: Invalid operator!\n");
                exit(1);
        }

        printf("Result: %.2f\n", result);
        printf("Do you want to continue? (y/n): \n");
        scanf(" %c", &operator);
    } while(operator == 'y' || operator == 'Y');

    printf("Calculator is exiting. Goodbye!\n");
    return 0;
}
