/*
** EPITECH PROJECT, 2021
** day01
** File description:
** z
*/

#ifndef Z_H
#define Z_H

#include <stdio.h>
#include <ctype.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

#define RESULT "z\n"

typedef struct zorglub_s
{
    uint64_t id;
    unsigned long long decimal;
} zorglub_t;

int is_hexa(char *str);

#endif /* !Z_H */