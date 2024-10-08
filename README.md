<<<<<<< HEAD
# ICHEC C Programming Practicals

## Overview
This repository is dedicated to the weekly practical assignments for the ICHEC module, focusing on C programming. Each practical will be uploaded weekly and will include various programming tasks aimed at enhancing understanding of C language concepts and applications.

## Repository Structure
The repository will include the following folders:
- **Week 1**: Introduction to C, basic syntax, and first program.
- **Week 2**: Data types, operators, and expressions.
- **Week 3**: Control structures (if statements, loops).
- **Week 4**: Functions and modular programming.
- **Week 5**: Arrays and strings.
- **Week 6**: Pointers and memory management.
- **Week 7**: Structures and file handling.
- **Week 8**: Dynamic memory allocation and linked lists.
- **Week 9**: Advanced topics (to be determined).

## Upcoming Practicals
- **Week 1 Practical**: Introduction to C programming.
- **Week 2 Practical**: Data types and operators.
- **Week 3 Practical**: Implementing control structures in C.
- **Week 4 Practical**: Creating and using functions.
- **Week 5 Practical**: Working with arrays and strings.
- **Week 6 Practical**: Pointers and their applications.
- **Week 7 Practical**: Using structures and handling files.
- **Week 8 Practical**: Memory management techniques.
- **Week 9 Practical**: Exploring advanced C programming concepts.

## Getting Started
To clone this repository and start working on the practicals, use the following command:

```bash
git clone https://github.com/yourusername/ichec-c-practicals.git
=======
# ICHEC Practical 2: Floating Point Arithmetic and Summation

## Overview
In this practical, we explore floating-point arithmetic using C programming. We analyze how numbers are represented in binary format and examine the implications of floating-point versus integer arithmetic in numerical computations. The source code for this practical has been sourced from BrightSpace/Canvas.

## Exercises

### Conversion.c
1. **Binary Digit Representation**: 
   - The number of binary digits in an integer can be calculated using the formula \( \text{num\_digits} = \lceil \log_2(\text{number} + 1) \rceil \).
   - For example, the integer `33554431` has **25 binary digits**: `111111111111111111111111111`. 
   - A standard `float` (32 bits) can represent approximately **7 decimal digits** of precision but can represent numbers up to **24 binary digits** accurately. Beyond this, precision errors may occur.

### Sum.c
2. **Sum Calculation**: 
   - The program calculates the sum of the series \( S_1 = 1 + \frac{1}{2} + \frac{1}{3} + \ldots + \frac{1}{1000} \) using two different summation methods:
     - **Sum 1**: Accumulates the sum from `1` to `1000`.
     - **Sum 2**: Accumulates the sum from `1000` down to `1`.

3. **Difference Between Sums**:
   - After calculating both sums, the program prints the difference:
     ```c
     diff = sum1 - sum2;
     ```
   - **Mathematical Comparison**: Theoretically, `sum1` and `sum2` should yield the same result; however, due to the way floating-point arithmetic works and the order of operations, slight differences may occur. This highlights the importance of understanding numerical precision in programming.

## Summary of Findings
- **Binary Digit Representation**: An integer like `33554431` uses **25 binary digits**, while a `float` can accurately represent **up to 24 binary digits**.
- **Sums Comparison**: While `sum1` and `sum2` are mathematically intended to be equal, they may exhibit differences due to floating-point precision limitations in C. The discrepancy arises from how floating-point numbers are handled in different orders of addition.

## Requirements
- C Compiler (GCC)
- A UNIX/Linux environment or VM for execution

## License
This project is licensed under the MIT License.
>>>>>>> practical2
