#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci Series up to %d: ", n);
    
    while (first <= n) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number n: ");
    scanf("%d", &n);
    
    generateFibonacci(n);
    
    return 0;
}
