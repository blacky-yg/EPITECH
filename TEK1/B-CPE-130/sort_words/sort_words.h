/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** sort_words.h
*/

#ifndef _SORT_WORDS_H
#define _SORT_WORDS_H

#include <unistd.h>
#include <stdlib.h>

void my_putstr(char *str);
int my_strlen(char *str);
int my_strcmp(char const *s1, char const *s2);
int is_space(char *str, int i);
int is_not_space(char *str, int i);
char *clean_str(char *str);
int words_nb(char *str);
char **my_str_to_word_array(char *str);
void display_array(char **array, int nb_of_words);
void sort_words(char **array, int nb_of_words);

#endif /* !_SORT_WORDS_H */