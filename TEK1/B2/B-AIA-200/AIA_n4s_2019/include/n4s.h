/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** n4s.h
*/

#ifndef N4S_H
#define N4S_H


#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int count(char *str);
int count_tab(char **tab);
char *send_take(char *str);
char *speed(char *str, char *stra, float left, float right);
char *rotate(char *stra, char *str, float value);
char **str_in_tab(char *str, char c);
char **get_info(char *str, char **tab);
char *my_strcat(char *dest, const char *src);
char **run(char *str, float left, float right);
#endif /* !N4S_H */
