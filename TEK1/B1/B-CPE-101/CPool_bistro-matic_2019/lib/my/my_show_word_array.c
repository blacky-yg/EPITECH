/*
** EPITECH PROJECT, 2019
** Compilation, Allocation: my_show_word_array
** File description:
** a function that displays the content of an array of words
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
    while (*tab) {
        my_putstr(tab[0]);
        my_putchar('\n');
        tab++;
    }
    return (0);
}
