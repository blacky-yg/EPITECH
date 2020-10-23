/*
** EPITECH PROJECT, 2020
** rostring
** File description:
** rostring
*/

#ifndef _ROSTRING_H
#define _ROSTRING_H

#include <unistd.h>
#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);
int is_not_space(char *str, int i);
int is_space(char *str, int i);
void rostring(char *str);

#endif /* !_ROSTRING_H */