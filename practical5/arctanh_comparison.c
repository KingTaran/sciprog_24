#include <stdio.h>
#include <math.h>  // For natural logarithms and fabs

// Function to compute arctanh(x) using the Maclaurin series
double artanh1(double x, double delta) {
    double result = 0.0;
    double term = x;  // The first term is just x
    int n = 0;
    
    // Loop until the term is smaller than the given precision delta
    while (fabs(term) > delta) {
        result += term;  // Add the current term to the result
        
        // Compute the next term in the series: x^(2n+3) / (2n+3)
        n++;
        term = pow(x, 2*n+1) / (2*n+1);
    }
    
    return result;
}

// Function to compute arctanh(x) using the natural logarithm method
double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

#define N 181  // Number of samples from -0.9 to 0.9 (inclusive) with step 0.01  #define to save memory as the value is fixed!

int main() {
    double delta;
    
    // Ask user to input the desired precision delta
    printf("Enter a small positive number delta for precision: ");
    scanf("%lf", &delta);

    double x_values[N];    // Array to store the x values
    double results1[N];    // Array to store results from Maclaurin series
    double results2[N];    // Array to store results from natural log method
    
    double x = -0.9;       // Start value of x
    for (int i = 0; i < N; i++) {
        x_values[i] = x;
        results1[i] = artanh1(x, delta);  // Using the Maclaurin series
        results2[i] = artanh2(x);         // Using the natural logarithms
        
        // Increment x by 0.01 for the next iteration
        x += 0.01;
    }

    // Output the results for comparison
    printf("x\tartanh1 (Maclaurin)\tartanh2 (Logarithms)\n");
    for (int i = 0; i < N; i++) {
        printf("%lf\t%.10lf\t%.10lf\n", x_values[i], results1[i], results2[i]);
    }
    
    return 0;
}