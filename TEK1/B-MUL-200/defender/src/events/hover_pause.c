/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** hover_pause
*/

#include "../../include/defender.h"

void hover_pause(pause_t pause, int x, int y)
{
    if ((x >= 550 && x <= 885) && (y >= 225 && y <= 290))
        sfText_setColor(pause.text[1], pause.color);
    else
        sfText_setColor(pause.text[1], sfWhite);
    if ((x >= 500 && x <= 870) && (y >= 365 && y <= 430))
        sfText_setColor(pause.text[2], pause.color);
    else
        sfText_setColor(pause.text[2], sfWhite);
    if ((x >= 590 && x <= 765) && (y >= 500 && y <= 570))
        sfText_setColor(pause.text[3], pause.color);
    else
        sfText_setColor(pause.text[3], sfWhite);
}