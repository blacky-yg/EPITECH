/*
** EPITECH PROJECT, 2019
** GUI_rpg
** File description:
** usage.c
*/

#include "../include/game.h"

int usage(void)
{
    write(1, USAGE, my_strlen(USAGE));
    return (0);
}