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
#include <fcntl.h>
#include <sys/mman.h>
#include <stdlib.h>

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

#endif /* !DEFINE_H */