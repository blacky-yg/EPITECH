/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** hover_menu
*/

#include "../../include/defender.h"

void hover_menu(menu_t menu, int x, int y)
{
    if ((x >= 60 && x <= 245) && (y >= 220 && y <= 270))
        sfText_setColor(menu.text[1], menu.color);
    else
        sfText_setColor(menu.text[1], sfBlack);
    if (((x >= 65 && x <= 380) && (y >= 350 && y <= 410)))
        sfText_setColor(menu.text[2], menu.color);
    else
        sfText_setColor(menu.text[2], sfBlack);
    if ((x >= 60 && x <= 175) && (y >= 500 && y <= 550))
        sfText_setColor(menu.text[3], menu.color);
    else
        sfText_setColor(menu.text[3], sfBlack);
}