/*
** EPITECH PROJECT, 2021
** nm
** File description:
** define
*/

#ifndef DEFINE_H
#define DEFINE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <ctype.h>

// ERRORS
#define P_ERROR "Permission denied!"
#define NOT_FOUND "No such file"
#define EMPTY "Empty file!"
#define BAD_FILE "is a directory"
#define BAD_FILE_FORMAT "File format not recognize"
#define MUNMAP "error: munmap"
#define NO_SYM "No symbols"
#define FILE_TRUNC "File truncated"
#define BAD_RET -1
#define ONE 1
#define ZERO 0

// OBJ FLAGS
#define BFD_NO_FLAGS    0x00
#define HAS_RELOC       0x01
#define EXEC_P          0x02
#define HAS_LINENO      0x04
#define HAS_DEBUG       0x08
#define HAS_SYMS        0x10
#define HAS_LOCALS      0x20
#define DYNAMIC         0x40
#define WP_TEXT         0x80
#define D_PAGED         0x100

#endif /* !DEFINE_H */