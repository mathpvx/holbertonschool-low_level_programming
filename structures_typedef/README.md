# C - Structures, typedef

## Description
In this project, we explore structures and typedef in C programming. Structures allow us to group related data under one name, making it easier to manage and manipulate complex data. Additionally, typedef provides a way to create aliases for existing data types, enhancing code readability and maintainability.

## Concepts
- Structures: What they are, when and why to use them, and how to define and manipulate them
- Typedef: How to use typedef to create new data type names
- Working with complex data structures in C

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- Code must use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- No more than 5 functions per file
- Only `printf`, `malloc`, `free`, and `exit` functions from the C standard library are allowed
- All header files should be include guarded

## File Descriptions
- `dog.h`: Header file containing structure definition and function prototype.
- `5-free_dog.c`: Function to free memory allocated for a dog.

## Tasks
0. Poppy:
   - Define a new type `struct dog` with elements `name`, `age`, and `owner`.

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg:
   - Write a function that frees dogs.
