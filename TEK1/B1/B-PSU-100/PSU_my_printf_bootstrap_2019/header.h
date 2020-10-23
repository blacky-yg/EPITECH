/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** prototypes of all functions exposed by my libmy.a
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <stdio.h>

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);

#endif /* MY_H */
