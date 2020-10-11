/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_str_to_word_array
*/

#include "../../include/my.h"

char **my_str_to_word_array(char *str, char c)
{
    int x = 0;
    int y = 0;
    char **array = malloc(sizeof(char *) * my_strlen(str));
    array[0] = malloc(sizeof(char) * my_strlen(str));
    for (; str[0] == ' ' && str[0]; str++);
    for (int i = 0; str[i]; ) {
        if (str[i] == c && str[i + 1]) {
            i++;
            y++;
            x = 0;
            array[y] = malloc(sizeof(char ) * my_strlen(str));
        } else {
            array[y][x] = str[i];
            i++;
            x++;
        }
    }
    return (array);
}