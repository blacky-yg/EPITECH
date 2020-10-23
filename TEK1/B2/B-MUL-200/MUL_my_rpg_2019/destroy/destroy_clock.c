/*
** EPITECH PROJECT, 2020
** destroy clock
** File description:
** destroy clock
*/

#include "../include/game.h"

void destroy_clock(t_rpg game)
{
    sfClock_destroy(game.menu_bg.gif.anim_clock);
}