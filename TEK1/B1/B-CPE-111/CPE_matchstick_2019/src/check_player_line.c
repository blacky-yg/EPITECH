/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** check_player_line
*/

#include "../include/matchstick.h"

int check_player_line(char *line, int i)
{
    int a = 0;

    for (int i = 0; line[i]; i++)
        if (line[i] < '0' || line[i] > '9')
            a++;
    my_putstr(line);
    if (a != 0)
        my_putstr("Error: invalid input (positive number expected)\n");
    else {
        if (my_getnbr(line) > i && a == 0) {
            my_putstr("Error: this line is out of range\n");
            a++;
        }
        else if (my_getnbr(line) == 0 && a == 0) {
            my_putstr("Error: this line is out of range\n");
            a++;
        }
    }
    return (a);
}