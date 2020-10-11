/*
** EPITECH PROJECT, 2020
** rrostring
** File description:
** rrostring
*/

#ifndef _RROSTRING_H
#define _RROSTRING_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *str);
void my_putstr(char *str);
char *my_strcpy(char *dest, char *src);
int is_not_space(char *str, int i);
int is_space(char *str, int i);
char *clean_str(char *str);
int words_nb(char *str);
char **my_str_to_word_array(char *str);
void display_array(char **array, int nb_of_words);
void rrostring(char *str);

#endif /* !_RROSTRING_H */