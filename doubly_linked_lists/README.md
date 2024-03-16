# C - Doubly linked lists

A project focusing on the implementation of doubly linked lists in C.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Code should use the Betty style and be checked using betty-style.pl and betty-doc.pl
- No usage of global variables
- Maximum of 5 functions per file
- Only allowed C standard library functions are `malloc`, `free`, `printf`, and `exit`
- Prototypes of all functions should be included in the header file `lists.h`
- All header files should be include guarded

## Tasks Examples
0. **Print list**
   - Write a function that prints all the elements of a `dlistint_t` list.
   - Prototype: `size_t print_dlistint(const dlistint_t *h);`
   - Return: the number of nodes

1. **List length**
   - Write a function that returns the number of elements in a linked `dlistint_t` list.
   - Prototype: `size_t dlistint_len(const dlistint_t *h);`

## Instructions
To compile and test the codes:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 
