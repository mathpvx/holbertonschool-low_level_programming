# C - Variadic Functions

## Description
This project explores the concept of variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments. This project implements variadic functions to perform tasks such as summing all parameters and printing strings.

## Concepts
- Variadic Functions: Understanding what variadic functions are and how to use them effectively.
- va_start, va_arg, va_end: Macros provided by the `stdarg.h` header to handle variable argument lists.
- Const Type Qualifier: Utilizing the `const` keyword to specify that certain function parameters should not be modified.
  
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
### 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If n == 0, return 0

### 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- `separator` is the string to be printed between the strings
- `n` is the number of strings passed to the function
- If `separator` is NULL, don’t print it
- If one of the string is NULL, print `(nil)` instead
- Print a new line at the end of your function
