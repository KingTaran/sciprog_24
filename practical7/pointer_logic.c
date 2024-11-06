#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototype for factorial calculation
int calculateFactorial(int n);

int main()
{
    int index, precision;       // `precision` represents the order of approximation
    double approx_e;
    double *seriesTerms;        // Dynamic memory allocation for the series terms

    // Input for the precision of the approximation
    printf("Enter the desired order (precision) for estimating e: ");
    if (scanf("%d", &precision) != 1)
    {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    // Allocate memory for terms based on the precision
    seriesTerms = (double *)malloc(precision * sizeof(double));
    if (seriesTerms == NULL) // Check if memory allocation succeeded
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Calculate each term of the series
    for(index = 0; index < precision; index++)
    {
        seriesTerms[index] = 1.0 / (double)calculateFactorial(index + 1);
        printf("Term %d: %.16lf\n", index + 1, seriesTerms[index]);
    }

    // Estimate e by summing the series terms
    approx_e = 1.0; // Start with the first term of e series which is 1

    for(index = 0; index < precision; index++)
    {
        approx_e += seriesTerms[index];
    }

    // Free dynamically allocated memory
    free(seriesTerms);

    // Display the approximation and the difference from the actual e value
    printf("Estimated e: %.10lf\n", approx_e);
    printf("Difference from actual e: %e\n", approx_e - exp(1.0));

    return 0;
}

// Recursive function to calculate factorial of a non-negative integer
int calculateFactorial(int n)
{
    if (n < 0)
    {
        printf("Factorial is only defined for non-negative integers.\n");
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * calculateFactorial(n - 1);
    }
}
