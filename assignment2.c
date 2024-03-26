#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char operator;
    float num1;
    float num2;
    float result;
    do{
        printf("Enter first number:\n");
        if (scanf(" %f", &num1) != 1){
            printf("Error: Invalid input!\n");
            exit(1);
        }
        printf("Enter operator :\n");
        scanf(" %c", &operator);
        printf("Enter second number: \n");
        if (scanf("%f", &num2) != 1){
            printf("Error: Invalid Input!\n");
            exit(1);
        }
        switch(operator){
            case '+':
               result=num1 + num2;
               break;
            case '-':
               result=num1 - num2;
               break;
            case '*':
               result= num1*num2;
               break;
            case '/':
               if (num2 !=0){
                  if(num1>=num2 && fmod(num1, num2)==0){
                    result = num1/num2;
                  }
               }
               else{
                 printf("Error: Division  conditions not met!\n");
                 continue;
               }
               break;
            default:
               printf("Error: Invalid operator!\n");
               exit(1);
        }
    printf("Result: %.2f\n", result);
    printf("Do you want to continue? (y/n): \n");
    scanf(" %c", &operator);
    }
    while(operator == 'y' || operator == 'Y');
    printf("Calculator is exiting. Goodbye!\n");
    return 0;
}