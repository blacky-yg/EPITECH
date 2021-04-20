/*
** EPITECH PROJECT, 2021
** day03
** File description:
** string
*/

#ifndef STRING_H_
#define STRING_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct string_t
{
    char *str;
    void (*assign_s)(struct string_t *this, const struct string_t *str);
    void (*assign_c)(struct string_t *this, const char *s);
    void (*append_s)(struct string_t *this, const struct string_t *ap);
    void (*append_c)(struct string_t *this, const char *ap);
    char (*at)(const struct string_t *this, size_t pos);
    void (*clear)(struct string_t *this);
    int (*size)(const struct string_t *this);
    int (*compare_s)(const struct string_t *this, const struct string_t *str);
    int (*compare_c)(const struct string_t *this, const char *str);
    size_t (*copy)(const struct string_t *this, char *s, size_t n,
                size_t pos);
    const char *(*c_str)(const struct string_t *this);
    int (*empty)(const struct string_t *this);
    int (*find_s)(const struct string_t *this, const struct string_t *str,
                size_t pos);
    int (*find_c)(const struct string_t *this, const char *str, size_t pos);
    void (*insert_s)(struct string_t *this, size_t pos,
                const struct string_t *str);
    void (*insert_c)(struct string_t *this, size_t pos, const char *str);
    int (*to_int)(const struct string_t *this);
    void (*print)(const struct string_t *this);
} string_t;

// string
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void string_init_2(string_t *this);

// assign
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

// append
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

// at
char at(const string_t *this, size_t pos);

// clear
void clear(string_t *this);

// size
int size(const string_t *this);

// compare
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);

// copy
size_t copy(const string_t *this, char *s, size_t n, size_t pos);

// c_str
const char *c_str(const string_t *this);

// empty
int empty(const string_t *this);

// find
int find_s(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);

// insert
void insert_s(string_t *this, size_t pos, const string_t *str);
void insert_c(string_t *this, size_t pos, const char *str);

// to_int
int to_int(const string_t *this);

// print
void print(const string_t *this);

#endif /* !STRING_H_ */