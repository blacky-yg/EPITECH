/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** main
*/

#include "sort_words.h"

int main(int ac, char *av[])
{
    char *str = NULL;
    char **array = NULL;
    int nb_of_words = 0;

    if (ac == 1)
        write(1, "\n", 1);
    else if (ac == 2) {
        str = clean_str(av[1]);
        nb_of_words = words_nb(str);
        array = my_str_to_word_array(str);
        sort_words(array, nb_of_words);
        display_array(array, nb_of_words);
    } else
        return (84);
    return (0);
}