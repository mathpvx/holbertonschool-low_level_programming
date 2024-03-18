# C - More malloc, free

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
0. `create_array`:
   - Prototype: `char *create_array(unsigned int size, char c);`
   - Description: Creates an array of characters of a specified size and initializes each element with the given character.
   - Returns: Pointer to the array, or `NULL` if it fails. Returns `NULL` if `size = 0`.

1. `alloc_grid`:
   - Prototype: `int **alloc_grid(int width, int height);`
   - Description: Returns a pointer to a 2-dimensional array of integers with each element initialized to 0.
   - Returns: Pointer to the allocated grid, or `NULL` if width or height is 0 or negative.
