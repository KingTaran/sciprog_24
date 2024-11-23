#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

// Function to count the number of lines in a given file
int countLines(const char filename[MAX_FILE_NAME]);

int main() {
    // Declare the file pointer and filename
    FILE *file;
    char filename[MAX_FILE_NAME];

    printf("Enter file name: ");
    scanf("%s", filename);

    // Get the matrix size (number of lines in the file)
    int size = countLines(filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Allocate memory for the magic square matrix
    int **magicSquare = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        magicSquare[i] = (int *)malloc(size * sizeof(int));
    }

    // Read matrix data from the file
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            fscanf(file, "%d", &magicSquare[i][j]);
        }
    }

    // Check if the matrix is a magic square
    int isMagic = isMagicSquare(magicSquare, size);

    if (isMagic == 0) {
        printf("This is not magic!\n");
    } else {
        printf("This is magic!\n");
    }

    // Free the allocated memory
    for (int i = 0; i < size; i++) {
        free(magicSquare[i]);
    }
    free(magicSquare);

    // Close the file
    fclose(file);

    return 0;
}

// Function to count the number of lines in a file
int countLines(const char filename[MAX_FILE_NAME]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 0;
    }

    int character;
    int lineCount = 0;

    while ((character = fgetc(file)) != EOF) {
        if (character == '\n') {
            lineCount++;
        }
    }

    fclose(file);
    return lineCount;
}
