#include<stdio.h>

// Function to compute the Greatest Common Divisor (GCD) of two integers using the Iterative approach
int findGCDIterative(int x, int y)
{
    int remainder;
    
    // Loop until the remainder becomes 0
    while (y != 0)
    {
        remainder = y;
        y = x % y;  // Get the remainder of x divided by y
        x = remainder;  // Update x to the previous y value
    }
    
    // Return the GCD which is stored in x at the end of the loop
    return x;
}

// Function to compute the Greatest Common Divisor (GCD) of two integers using the Recursive approach
int findGCDRecursive(int x, int y)
{
    // Base case: when y becomes 0, the GCD is x
    if (y == 0)
    {
        return x;
    }
    else
    {
        // Recursive call where we pass y and the remainder of x divided by y
        return findGCDRecursive(y, x % y);
    }
}

int main()
{
    // Declaring the variables for input integers and error checking
    int firstNumber, secondNumber, scanResult;

    // Prompt user to input two integers
    printf("Enter two positive integers (e.g., 24 36): ");
    
    // Take input from the user and check if it's valid
    scanResult = scanf("%d %d", &firstNumber, &secondNumber);

    // Check if the input was not two integers
    if (scanResult != 2)
    {
        printf("\nInvalid input! Please enter two integers only.\n");
        return 1;  // Return error code if input is not valid
    }

    // Check if both numbers are positive integers
    if (firstNumber <= 0 || secondNumber <= 0)
    {
        printf("\nError: Both numbers must be positive integers.\n");
        return 1;  // Return error code for non-positive integers
    }

    // Calculate and print the GCD using the iterative approach
    printf("\nIterative GCD of %d and %d is: %d", firstNumber, secondNumber, findGCDIterative(firstNumber, secondNumber));
    
    // Calculate and print the GCD using the recursive approach
    printf("\nRecursive GCD of %d and %d is: %d\n", firstNumber, secondNumber, findGCDRecursive(firstNumber, secondNumber));

    return 0;  // Return success
}
