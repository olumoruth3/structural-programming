#include <stdio.h>
int main(){
    float num1;
    float num2;
    float sum;
    float difference;
    printf("Enter the first number:\n");
    if (scanf("%f", &num1) !=1){
        printf("invalid input");
        return 1;
    }
    printf("Enter the second number:\n");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("The sum is: %f\n", sum);
    difference = num1 - num2;
    printf("The difference is: %f\n", difference);
    printf("The sum and difference are %f and %f respectively", sum, difference);
    return 0;
}