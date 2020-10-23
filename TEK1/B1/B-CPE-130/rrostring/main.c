/*
** EPITECH PROJECT, 2020
** rrostring
** File description:
** main
*/

#include "rrostring.h"

void rrostring(char *str)
{
    char **array = NULL;
    int nb_of_words = 0;

    str = clean_str(str);
    nb_of_words = words_nb(str);
    array = my_str_to_word_array(str);
    display_array(array, nb_of_words);
}

int main(int ac, char *av[])
{
    if (ac > 2)
        return (84);
    else if (ac == 1)
        return (0);
    else {
        rrostring(av[1]);
        write(1, "\n", 1);
    }
    return (0);
}