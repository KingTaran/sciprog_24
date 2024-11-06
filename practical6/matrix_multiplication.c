#include<stdio.h>

int main()
{
    int rowsA = 5, colsA = 3, colsB = 4;
    double matA[rowsA][colsA], matB[colsA][colsB], matC[rowsA][colsB];

    // Declaring the loop variables
    int row, col, k;

    // Initializing matrix A
    for(row = 0; row < rowsA; row++)
        for(col = 0; col < colsA; col++)
            matA[row][col] = row + col;

    // Initializing matrix B
    for(row = 0; row < colsA; row++)
        for(col = 0; col < colsB; col++)
            matB[row][col] = row - col;

    // Initializing matrix C to zero
    for(row = 0; row < rowsA; row++)
        for(col = 0; col < colsB; col++)
            matC[row][col] = 0.0;

    // Performing matrix multiplication
    for(row = 0; row < rowsA; row++)
        for(col = 0; col < colsB; col++)
            for(k = 0; k < colsA; k++)
                matC[row][col] += matA[row][k] * matB[k][col];

    // Printing Matrix A
    printf("Matrix A:\n");
    for(row = 0; row < rowsA; row++)
    {
        for(col = 0; col < colsA; col++)
        {
            printf("%3.0f\t", matA[row][col]);
        }
        printf("\n");
    }

    // Printing Matrix B
    printf("Matrix B:\n");
    for(row = 0; row < colsA; row++)
    {
        for(col = 0; col < colsB; col++)
        {
            printf("%3.0f\t", matB[row][col]);
        }
        printf("\n");
    }

    // Printing Matrix C
    printf("Matrix C (Result of A * B):\n");
    for(row = 0; row < rowsA; row++)
    {
        for(col = 0; col < colsB; col++)
        {
            printf("%3.0f\t", matC[row][col]);
        }
        printf("\n");
    }

    return 0;
}
