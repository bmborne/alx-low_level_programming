# 0x15. C - File I/O

## REQUIREMENTS:
    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
    Allowed syscalls: read, write, open, close
    You are allowed to use _putchar
    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    Don’t forget to push your header file
    All your header files should be include guarded
    Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...


## About
An introductory project on:
- How to create, open, close, read and write files
- File descriptors
- System calls
- The difference between a function and a system call
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[0-read_textfile.c](0-read_textfile.c)** - function that reads a text file and prints it to the POSIX standard output.

**[1-create_file.c](1-create_file.c)** - function that creates a file.

**[2-append_text_to_file.c](2-append_text_to_file.c)** - function that appends text at the end of a file.

**[3-cp.c](3-cp.c)** - function that copies the content of one file to another file.
