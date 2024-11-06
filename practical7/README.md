# Practical 7

This repository contains two C programs for Week 7 practical exercises: `find_exponential.c` and `pointer_logic.c`. These programs demonstrate essential concepts in C, including dynamic memory allocation, pointers, and recursion.

## Files Included
- **`find_exponential.c`**: A program that approximates the mathematical constant `e` using a series expansion, allowing the user to specify the level of precision.
- **`pointer_logic.c`**: A program that demonstrates pointer operations by dynamically allocating, modifying, and freeing memory for an integer array.

## Program Details

### `find_exponential.c`
This program approximates the constant `e` through a series expansion up to a specified order:
- **User Input**: Prompts the user to enter an integer to determine the precision (or order) of the approximation.
- **Dynamic Memory Allocation**: Allocates memory for storing each term of the series.
- **Calculation**:
  - Each term is calculated as \( \frac{1}{(i+1)!} \) using a recursive factorial function.
  - Terms are summed to approximate `e`.
- **Output**:
  - Prints each term in the series.
  - Displays the final estimate for `e` and the difference from the actual value of `e`.
- **Memory Management**: Frees the allocated memory after the calculation to prevent memory leaks.

### `pointer_logic.c`
This program demonstrates basic pointer operations and dynamic memory allocation:
- **Array Allocation**: Dynamically allocates memory for an integer array of size 5.
- **Array Initialization**: Fills the array with the value `1` for each element.
- **Output**: Prints each element of the array.
- **Memory Deallocation**: Frees the memory after use to ensure efficient memory management.

## Compilation and Execution
Use the following commands to compile and run the programs:

```bash
# Compile and run finde.c with math library for accurate exponential calculations
gcc find_exponential.c -o find_exponential -lm
./find_exponential

# Compile and run pointers.c
gcc pointer_logic.c -o pointer_logic
./pointer_logic
