#include <stdio.h>

// Function to calculate the next Fibonacci number
void fibonacci_step(int *fn1, int *fn2) {
    int fn = *fn1 + *fn2;  // Calculate the next number
    *fn2 = *fn1;  // Update fn2 to the current fn1
    *fn1 = fn;    // Update fn1 to the new Fibonacci number
}

int main() {
    int n;
    
    // Ask the user to input the value of n
    printf("Enter the value of n to generate the Fibonacci series: ");
    scanf("%d", &n);

    // Initialize the first two Fibonacci numbers
    int f0 = 0, f1 = 1;

    // Print the first number in the series
    printf("%d, ", f0);

    // Loop to generate the Fibonacci series
    for (int i = 1; i < n; i++) {
        // Call the fibonacci_step function
        fibonacci_step(&f1, &f0);
        // Print the next number in the series
        printf("%d, ", f1);
    }

    return 0;
}
