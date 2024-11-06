#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate factorial
int computeFactorial(int num);

int main()
{
    int idx, precision;      // `precision` for the series order, `idx` for indexing
    double estimate_e;
    double *seriesTerms;     // Pointer for dynamically allocated terms array

    printf("Enter the precision (order of the series) to estimate e: ");
    if (scanf("%d", &precision) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Allocate memory for terms array
    seriesTerms = (double *)malloc(precision * sizeof(double));

    // Calculate each term in the series and store it
    for(idx = 0; idx < precision; idx++)
    {
        seriesTerms[idx] = 1.0 / (double)computeFactorial(idx + 1);
        printf("Term %d: %.16lf\n", idx + 1, seriesTerms[idx]);
    }

    // Calculate the estimate for e
    estimate_e = 1.0;   // Start with the first term, 1.0

    for(idx = 0; idx < precision; idx++)
    {
        estimate_e += seriesTerms[idx];
    }

    // Free allocated memory
    free(seriesTerms);

    // Display the result
    printf("Estimated e: %.10lf\n", estimate_e);
    printf("Difference from actual e: %e\n", estimate_e - exp(1.0));

    return 0;
}

// Recursive function to calculate factorial
int computeFactorial(int num)
{
    if (num < 0)
    {
        printf("Factorial function requires a non-negative integer.\n");
        return -1;
    }
    else if(num == 0)
    {
        return 1;
    }
    else
    {
        return num * computeFactorial(num - 1);
    }
}
