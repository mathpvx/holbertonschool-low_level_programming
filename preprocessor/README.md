# C - Preprocessor

## Description
In this project, we delve into the preprocessor in C programming. We learn about macros, including object-like macros and function-like macros, and how to use them effectively. Additionally, we explore include guards to prevent header file inclusion issues.

## Concepts
- Macros and their usage
- Predefined macros in C
- Include guards in header files

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- Code must use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- Only `malloc`, `free`, and `exit` functions from the C standard library are allowed. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- `_putchar` function can be used (provided in separate file)
- Do not push `_putchar.c`, it won't be considered
- Prototypes of all functions and `_putchar` must be included in the header file `main.h`
- All header files should be include guarded

## File Descriptions
- `0-object_like_macro.h`: Header file defining a macro named SIZE as an abbreviation for the token 1024.
- `1-pi.h`: Header file defining a macro named PI as an abbreviation for the token 3.14159265359.
- `2-main.c`: Main program to test the macros defined in `1-pi.h`.
- `3-function_like_macro.h`: Header file defining a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
- `4-sum.c`: Main program to test the function-like macro SUM(x, y).

## Tasks
0. Object-like Macro:
   - Define a macro named SIZE as an abbreviation for the token 1024.

1. PI:
   - Define a macro named PI as an abbreviation for the token 3.14159265359.

2. File Name:
   - Define a macro named `FILE` as the current file name.

3. Function-like Macro:
   - Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
