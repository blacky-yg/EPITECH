# MALLOC

## UNIT DESCRIPTION

Next installment of the first year's UNIX system programming unit. All projects are to be exclusively done in C/UNIXX (given that it's the next installment of the 1st year's PSU), except when explicitly stated otherwise in the subject:

- Memory allocation management (brk(2), sbrk(2), malloc project)

In order to validate this unit, you must show, through your project, that you have acquired the following skills:

- Understanding of the mechanisms of memory management (in particular the links between physical memory and virtual memory);

- Understanding of the structure of a binary(ELF) file format

## SKILLS TO BE ACQUIRED

- Technical skills

- Organizational and personal (precision etc.) skills

- "Group work management"

Malloc
{EPITECH.} second year project.

Recoding C memory-allocation functions:

malloc()
free()
calloc()
realloc()
Requirements
Make
GCC
Compilation
Navigate to the root of the repository from your Terminal and run make to build the libmy_malloc.so shared library.

How to use the functions?
On Linux
To replace the default memory-allocation functions with our functions, execute those commands:

LD_LIBRARY_PATH=$(pwd)
LD_PRELOAD=/path/to/our/library/libmy_malloc.so ./path/to/your/c/program
Authors

