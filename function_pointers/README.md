# C - Function Pointers

## Description
This project explores the concept of function pointers in C programming. Function pointers are variables that store the address of functions, allowing for dynamic function calls and providing flexibility in program design.

## Concepts
- Function Pointers: Understanding what function pointers are, how to declare and initialize them, and how to use them effectively.
- Pointer Arithmetic: Exploring how function pointers work in memory and how to perform arithmetic operations on them.
- Callback Functions: Utilizing function pointers to implement callback functions, allowing functions to be passed as arguments to other functions.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- Code must use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- Only `malloc`, `free`, and `exit` functions from the C standard library are allowed
- All header files should be include guarded

## Tasks
### 0. What's my name
Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
- Usage: `calc num1 operator num2`
- The program prints the result of the operation, followed by a new line
- Operator is one of the following: `+, -, *, /, %`
- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status 98
- If the operator is none of the above, print `Error`, followed by a new line, and exit with the status 99
- If the user tries to divide (/ or %) by 0, print `Error`, followed by a new line, and exit with the status 100

#### Files Required
- `3-calc.h`: Header file containing function prototypes and data structures.
- `3-op_functions.c`: Implementation of arithmetic operation functions.
- `3-get_op_func.c`: Function to select the correct operation function based on operator.
- `3-main.c`: Main function to parse arguments and perform calculations.

## Compilation and Examples
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
