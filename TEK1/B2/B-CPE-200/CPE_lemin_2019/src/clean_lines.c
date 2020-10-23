/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** clean_lines
*/

#include "../include/lemin.h"

char *clean_line(char *src)
{
    int i = 0, j = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (src == NULL)
        return (NULL);
    for (; src[i] == ' ' && src[i] != '\0'; i++);
    for (; src[i] != '\0'; i++, j++) {
        for (; src[i + 1] != '\0' &&
            src[i] == ' ' && src[i + 1] == ' '; i++);
        if (src[i] == '#' && src[i + 1] != '#')
            break;
        if (src[i] != ' ' || (src[i] == ' ' && src[i + 1] != ' '))
            dest[j] = src[i];
    }
    dest[j] = '\0';
    for (j -= 1; j >= 0 && dest[j] == ' '; j--)
        dest[j] = '\0';
    return (dest);
}

char **clean_lines(char **lines)
{
    for (int o = 0; lines[o] != NULL; o++)
        lines[o] = clean_line(lines[o]);
    return (lines);
}
