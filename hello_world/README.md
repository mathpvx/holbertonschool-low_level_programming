# C - Hello, World

A beginner's project introducing the fundamentals of C programming.

## Requirements
### C
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A README.md file at the root of the repository, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Code should follow the Betty style and be checked using betty-style.pl and betty-doc.pl

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All scripts will be tested on Ubuntu 20.04 LTS
- All scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All files should end with a new line
- The first line of all files should be `#!/bin/bash`

## Tasks
0. **Preprocessor**
   - Write a script that runs a C file through the preprocessor and saves the result into another file.
   - The C file name will be saved in the variable `$CFILE`
   - The output should be saved in the file `c`

1. **Compiler**
   - Write a script that compiles a C file but does not link.
   - The C file name will be saved in the variable `$CFILE`
   - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.

