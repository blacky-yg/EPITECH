/*
** EPITECH PROJECT, 2020
** my_str_to_word_tab
** File description:
** my str
*/

#include "../include/n4s.h"
#include "../include/my.h"

char **str_in_tab(char *str, char c)
{
    int x = 0;
    int y = 0;
    char **array = malloc(sizeof(char *) * my_strlen(str));
    array[0] = malloc(sizeof(char) * my_strlen(str));
    if (str == NULL)
        return (NULL);
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
