# C - malloc, free

In this project, we explore the concepts of dynamic memory allocation in C using `malloc` and `free`. Very important notions in C language !

## Concepts
- Automatic and dynamic allocation
- `malloc` and `free` functions
- Memory management
- Pointer manipulation

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- Code must use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- Only `malloc` and `free` functions from the C standard library are allowed. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- `_putchar` function can be used (provided in separate file)
- Do not push `_putchar.c`, it won't be considered
- Prototypes of all functions and `_putchar` must be included in the header file `main.h`
- Do not forget to push `main.h` to your repository

## Tasks
0. `Trust no one`:
   - Prototype: `void *malloc_checked(unsigned int b);`
   - Description: Allocates memory using `malloc`. If `malloc` fails, the function terminates the program with an exit status of 98.
   - Returns: Pointer to the allocated memory.

3. `array_range`:
   - Prototype: `int *array_range(int min, int max);`
   - Description: Creates an array of integers containing values from `min` to `max` (inclusive), ordered from `min` to `max`.
   - Returns: Pointer to the newly created array. If `min > max`, or if `malloc` fails, returns `NULL`.
