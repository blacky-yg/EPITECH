/*
** EPITECH PROJECT, 2021
** day09
** File description:
** ex00
*/

#ifndef EX00_H
#define EX00_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct cthulhu_s
{
    char *m_name;
    int m_power;
} cthulhu_t;

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

koala_t *new_koala(char *name, char is_a_legend);
cthulhu_t *new_cthulhu();
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
void eat(koala_t *this);

#endif /* !EX00_H */