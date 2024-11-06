# Practical 5

This folder contains two C programs:

1. **Fibonacci Series**: A program that generates the Fibonacci series up to a user-defined number.
2. **Inverse Hyperbolic Tangent Comparison**: A program that calculates the inverse hyperbolic tangent (`arctanh`) using two different methods: the Maclaurin series and logarithmic functions, and compares their results.

## Table of Contents

- [Fibonacci Series](#fibonacci-series)
- [Inverse Hyperbolic Tangent Comparison](#inverse-hyperbolic-tangent-comparison)
- [Usage](#usage)
- [Compilation](#compilation)
- [Requirements](#requirements)
- [License](#license)

## Fibonacci Series

### Description

The Fibonacci series is a sequence where each number is the sum of the two preceding ones, starting from 0 and 1. The program allows the user to input a number `n` to generate the Fibonacci series up to the `n`-th term.

### How It Works

- The user is prompted to enter a value for `n`.
- The program computes and prints the Fibonacci series from `F0` to `Fn`.


## Inverse Hyperbolic Tangent Comparison

### Description

This program calculates the inverse hyperbolic tangent (`arctanh`) for values of `x` ranging from -0.9 to 0.9 using two different methods:
- **Maclaurin Series**: An infinite series approximation.
- **Logarithmic Function**: Uses the natural logarithm to calculate `arctanh`.

### How It Works

- The user is prompted to enter a precision value (`delta`) for the Maclaurin series calculation.
- The program computes `arctanh(x)` for values of `x` sampled at intervals of 0.01 and displays results from both methods.


## Usage

1. **Clone the Repository** (if applicable) or download the files.
2. **Navigate to the folder** where the source files are located.
3. **Compile the C files** using a C compiler such as `gcc`.

## Compilation

Use the following command to compile the programs:

```bash
gcc fibonacci_and_arctanh.c -o fibonacci_and_arctanh -lm
