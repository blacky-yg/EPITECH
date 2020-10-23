/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check_line
*/

#include "../include/navy.h"

int check_line(char *line)
{
    if (my_strlen(line) != 7)
        return (1);
    if (line[2] > line[5])
        return (1);
    if (line[2] != line[5] && line[3] != line[6])
        return (1);
    if (line[2] == line[5] && line[3] >= line[6])
        return (1);
    if (line[0] < '2' || line[0] > '5')
        return (1);
    if (line[1] != ':' || line[4] != ':')
        return (1);
    if (line[2] < 'A' || line[5] < 'A')
        return (1);
    if (line[2] > 'H' || line[5] > 'H')
        return (1);
    if (line[3] < '1' || line[6] < '1')
        return (1);
    if (line[3] > '8' || line[6] > '8')
        return (1);
    return (0);
}