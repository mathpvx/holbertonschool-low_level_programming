# C - Pointers, Arrays, and Strings

This Holberton School project is focusing on mastering pointers, arrays, and string manipulation in C.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file

## Tasks

### Task 0: 98 Battery st.

**Prototype**: `void reset_to_98(int *n);`

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.


### Task 10: Convert string to integer

**Prototype**: `int _atoi(char *s);`

Write a function that converts a string to an integer.

- The number in the string can be preceded by an infinite number of characters.
- You need to take into account all the - and + signs before the number.
- If there are no numbers in the string, the function must return 0.
- You are not allowed to use long.
- You are not allowed to declare new variables of “type” array.
- You are not allowed to hard-code special values.
