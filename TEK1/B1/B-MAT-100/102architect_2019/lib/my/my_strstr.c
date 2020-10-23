/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my_strstr
*/

#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len_to_find = my_strlen(to_find);

    while (str[i] != '\0') {
        if (str[i] == to_find[j]) {
            while (str[i] == to_find[j] && to_find[j] != '\0') {
                ++i;
                ++j;
            }
            if (j == len_to_find) {
                str += i - j;
                return (str);
            } else {
                j = 0;
                i -= j;
            }
        }
        i++;
    }
    return (str);
}
