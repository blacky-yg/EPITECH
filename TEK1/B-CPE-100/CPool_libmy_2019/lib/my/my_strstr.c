/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_strstr
*/

#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len_to_find = my_strlen(to_find);

    for (; str[i]; i++) {
        if (str[i] == to_find[j]) {
            for (; str[i] == to_find[j] && to_find[j]; ++i, ++j);
            if (j == len_to_find) {
                str += i - j;
                return (str);
            } else {
                j = 0;
                i -= j;
            }
        }
    }
    return (str);
}