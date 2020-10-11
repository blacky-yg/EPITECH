/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** hover_help
*/

#include "../../include/defender.h"

void hover_help(help_t help, int x, int y)
{
    if ((x >= 40 && x <= 185) && (y >= 555 && y <= 610))
        sfText_setColor(help.text[1], help.color);
    else
        sfText_setColor(help.text[1], sfBlack);
}