# Week 6 Practical

This repository contains the C program for Week 6 practical exercises, focusing on matrix multiplication using two-dimensional arrays in C.

## Files Included
- **`matrix_multiplication.c`**: A program that multiplies two matrices, `A` and `B`, to produce a result matrix `C`.

## Matrix Details
The program performs matrix multiplication on matrices with predefined dimensions:
- **Matrix `A`**: 5x3, initialized with elements defined by `A[i][j] = i + j`.
- **Matrix `B`**: 3x4, initialized with elements defined by `B[i][j] = i - j`.
- **Result Matrix `C`**: 5x4, calculated as the product of matrices `A` and `B`.

## Program Overview
1. **Initialization**:
   - Elements in matrix `A` and matrix `B` are initialized using simple arithmetic expressions to populate their values.
   - Matrix `C` is initialized with zeros.

2. **Matrix Multiplication**:
   - The program computes the product of matrices `A` and `B`, storing the result in matrix `C`.

3. **Output**:
   - The program outputs matrix `A`, matrix `B`, and the resulting matrix `C` to the console.

## To Compile and Run
Use the following commands to compile and run the program:

```bash
gcc matrix_multiplication.c -o matrix_multiplication
./matrix_multiplication
