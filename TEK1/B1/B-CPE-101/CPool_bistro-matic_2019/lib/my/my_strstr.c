/*
** EPITECH PROJECT, 2019
**  my_strstr
** File description:
** my_strstr
*/

#include <stdlib.h>

char* my_strstr(char *str, char const *to_find)
{
    while (*str)  {
        char *s_start = str;
        char const *s_to_find;

        s_to_find = to_find;
        while (*str && *s_to_find && *str == *s_to_find) {
            str++;
            s_to_find++;
        }
        if (!*s_to_find)
            return (char*)(s_start);
        str = s_start + 1;
    }
    return NULL;
}
