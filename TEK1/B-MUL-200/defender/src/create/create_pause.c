/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_pause
*/

#include "../../include/defender.h"

int create_pause(pause_t *pause)
{
    for (int i = 0; i < 4; i++) {
        pause->text[i] = sfText_create();
        if (!pause->text[i])
            return (84);
    }
    pause->font = sfFont_createFromFile(FONT);
    if (!pause->font)
        return (84);
    pause->color = sfColor_fromRGB(78, 147, 160);
    for (int i = 0; i < 4; i++) {
        sfText_setFont(pause->text[i], pause->font);
        sfText_setColor(pause->text[i], sfWhite);
    }
    return (0);
}