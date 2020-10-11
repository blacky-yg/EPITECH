/*
** EPITECH PROJECT, 2020
** countwords
** File description:
** countwords.h
*/

#ifndef _COUNT_WORDS_H
#define _COUNT_WORDS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str);
char *clean_str(char *str);
int my_strcmp(char const *s1, char const *s2);
char **my_str_to_word_array(char *str);
int is_not_space(char *str, int i);
int is_space(char *str, int i);
int words_nb(char *str);
void count_words(char *str);

#endif /* !_COUNT_WORDS_H */