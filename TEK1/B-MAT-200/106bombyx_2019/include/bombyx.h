/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** bombyx.h
*/

#ifndef _BOMBYX_H_
#define _BOMBYX_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

typedef struct bombyx_s
{
    int flag;
    double n;
    double k;
    double begin;
    double end;
} bombyx_t;

int my_strcmp(char const *s1, char const *s2);
int bomb(bombyx_t *bombyx);
void init_struct(int ac, char *av[], bombyx_t *bombyx);
int check_number(char *str);
int check_decimal(char *str);
int error_fix(int ac, char **av);
void usage(void);
int fix_error(int ac, char *av[]);

#endif /* !_BOMBYX_H_ */