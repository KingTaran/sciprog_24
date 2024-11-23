# Practical 9

This repository contains the code and resources for the Week 9 practical exercise, which involves working with matrices in C to determine if they form a magic square. The program demonstrates concepts such as file handling, dynamic memory allocation, and matrix operations.

---

## Files Included

- **`magic_square.txt`**  
  Contains a sample magic square matrix for testing.

- **`not_magic_square.txt`**  
  Contains a non-magic square matrix for testing.

- **`main.c`**  
  The main program that reads a matrix from a file, dynamically allocates memory for the matrix, and checks if it is a magic square.

- **`magic_square.h`**  
  Header file that defines the `isMagicSquare` function, which checks whether a given matrix is a magic square.

---

## Program Details

### **`main.c`**
1. Prompts the user to enter the name of a file containing a square matrix.
2. Reads the number of lines in the file to determine the size of the matrix.
3. Dynamically allocates memory for the matrix and populates it with the data from the file.
4. Calls the `isMagicSquare` function to verify if the matrix meets the magic square conditions.
5. Outputs whether the given matrix is a magic square or not.
6. Ensures all dynamically allocated memory is freed and the file is closed after processing.

### **`magic_square.h`**
- Implements the `isMagicSquare` function.  
- A **magic square** is defined as an \( n \times n \) matrix where:
  - The sum of each row, column, and both main diagonals equals \( M = \frac{n(n^2 + 1)}{2} \).
- The function:
  - Ensures all rows, columns, and diagonals satisfy the magic square condition.
  - Returns `0` if the matrix is not a magic square or if \( n \) is negative.
  - Returns a non-zero value if the matrix is a magic square.

---

## How to Run

1. **Compile the program**:  
   ```bash
   gcc main.c -o magic_square
