/*
** EPITECH PROJECT, 2020
** rostring
** File description:
** main
*/

#include "rostring.h"

void rostring(char *str)
{
    char *str_cpy = malloc(my_strlen(str) + 1);
    int i = 0;
    int len_cpy = 0;

    for (; is_space(str, i); i++);
    for (; str[i] && is_not_space(str, i); i++);
    for (; is_space(str, i); i++);
    str_cpy = my_strcpy(str_cpy, &str[i]);
    i = 0;
    len_cpy = my_strlen(str_cpy);
    for (; is_space(str, i); i++);
    for (; str[i] && is_not_space(str, i); i++, len_cpy++)
        str_cpy[len_cpy] = str[i];
    str_cpy[len_cpy] = '\0';
    write(1, str_cpy, my_strlen(str_cpy));
    free(str_cpy);
}

int main(int ac, char *av[])
{
    if (ac > 2)
        return (84);
    else if (ac == 1)
        return (84);
    else {
        rostring(av[1]);
        write(1, "\n", 1);
    }
    return (0);
}