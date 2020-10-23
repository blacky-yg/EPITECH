/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include "../../include/get_next_line.h"
#include "../../include/my.h"

int ch_line(char *str)
{
    int i = 0;

    for (; str[i]; i++)
        if (str[i] == '\n')
            return (84);
    return (0);
}

char *my_strcat(char *buf, char *buffer, int size)
{
    int i = 0;
    int j = 0;
    char *result;

    for (i = 0; buf[i]; i++);
    result = malloc(sizeof(char) * (i + size + 1));
    if (result == NULL)
        return (NULL);
    for (i = 0; buf[i]; i++)
        result[i] = buf[i];
    for (; size != 0 && j < size; j++)
        result[i + j] = buffer[j];
    result[i + size] = '\0';
    return (result);
}

char *my_strrcat(char *str)
{
    int i = 0;
    char *buf = NULL;
    int j = my_strlen(str);;

    for (; str[i] != '\0' && str[i] != '\n'; i++);
    if (str[i] == '\n')
        i++;
    buf = malloc(sizeof(char) * ((j - i) + 1));
    if (buf == NULL)
        return (NULL);
    for (j = 0; str[i]; j++, i++)
        buf[j] = str[i];
    buf[j] = '\0';
    return (buf);
}

char *get_next_line(int fd)
{
    static char buff[READ_SIZE];
    static char *buf = "\0";
    char *rest = "\0";
    static int rd = 1;
    static int sd = 0;

    if (buff == NULL || READ_SIZE <= 0 || fd == -1)
        return (NULL);
    if (sd != -1 && my_strlen(buf) != 0)
        if ((rest = my_strcat(buf, NULL, 0)) == NULL)
            return (NULL);
    for (; rd != 0 && (rd = read(fd, buff, READ_SIZE)) > 0; )
        if ((rest = my_strcat(rest, buff, rd)) && ch_line(rest) == 84 || !rest)
            break;
    if (rest == NULL || (buf = my_strrcat(rest)) == NULL ||
        rd == -1 || rd == 0 && my_strlen(rest) == 0)
        return (NULL);
    for (int j = 0; rest[j]; j++)
        rest[j] == '\n' ? rest[j] = '\0' : 0;
    return (rest);
}