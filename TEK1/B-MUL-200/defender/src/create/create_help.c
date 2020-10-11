/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_help
*/

#include "../../include/defender.h"

int create_help(help_t *help)
{
    for (int i = 0; i < 2; i++) {
        help->text[i] = sfText_create();
        if (!help->text[i])
            return (84);
    }
    help->font = sfFont_createFromFile(FONT);
    if (!help->font)
        return (84);
    for (int i = 0; i < 2; i++) {
        sfText_setFont(help->text[i], help->font);
        sfText_setColor(help->text[i], sfBlack);
    }
    help->color = sfColor_fromRGB(78, 147, 160);
    return (0);
}