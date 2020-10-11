/*
** EPITECH PROJECT, 2020
** countwords
** File description:
** main
*/

#include "countwords.h"

void count_words(char *str)
{
    int nb_of_words = words_nb(str);
    char **array = my_str_to_word_array(str);
    int count = 0;
    int check = 0;
    int i = 0;
    int j = 0;

    for (; i < nb_of_words; i++) {
        for (; j < nb_of_words; j++)
            (my_strcmp(array[i], array[j]) == 0) ? count++ : 1;
        for (j = 0; j < i; j++)
            (my_strcmp(array[i], array[j]) == 0) ? check++ : 1;
        if (check == 0 || i == 0)
            printf("%s: %d\n", array[i], count);
        check = 0;
        count = 0;
    }
}

int main(int ac, char *av[])
{
    char *str = NULL;

    if (ac == 1)
        write(1, "\n", 1);
    else if (ac == 2) {
        str = clean_str(av[1]);
        count_words(str);
    } else
        return (84);
    return (0);
}