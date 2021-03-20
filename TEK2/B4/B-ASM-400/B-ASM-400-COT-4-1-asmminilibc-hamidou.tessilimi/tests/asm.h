/*
** EPITECH PROJECT, 2021
** minilibC
** File description:
** asm
*/

#ifndef ASM_H
#define ASM_H

#include <string.h>
#include "test_redirect.h"

void *handle;
char *str;
char *str2;
int nb;

size_t (*my_strlen)(const char *);
void *(*my_memcpy)(void *, const void *, size_t);
char *(*my_strchr)(const char *, int);
void *(*my_memset)(void *, int, size_t);
int (*my_strcmp)(const char *, const char *);
int (*my_strcasecmp)(const char *, const char *);
void *(*my_memcpy)(void *, const void *, size_t);
void *(*my_memmove)(void *, const void *, size_t);
int (*my_strncmp)(const char *, const char *, size_t);
char *(*my_strstr)(const char *, const char *);
char *(*my_strpbrk)(const char *, const char *);
size_t (*my_strcspn)(const char *, const char *);
char *(*my_rindex)(const char *, int);

#endif /* !ASM_H */