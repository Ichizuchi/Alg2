#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    long long fib[n]; 

  
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci numbers
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers
    printf("Fibonacci Sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }

    printf("\n");
    return 0; // Exit with success
}