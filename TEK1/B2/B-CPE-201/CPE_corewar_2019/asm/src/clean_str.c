/*
** EPITECH PROJECT, 2020
** asm
** File description:
** clean_str
*/

#include "../include/asm.h"

char *clean_str(char *str)
{
    int i = 0;
    int j = 0;
    char *str_clean = malloc(my_strlen(str) + 1);

    for (; is_space(str, i); i++);
    str_clean[j] = str[i];
    i++;
    j++;
    for (; str[i]; i++) {
        if (is_not_space(str, i)) {
            if (is_space(str, i - 1)) {
                str_clean[j] = 32;
                j++;
            }
            str_clean[j] = str[i];
            j++;
        }
    }
    return (str_clean);
}