/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_menu
*/

#include "../../include/defender.h"

void destroy_menu(menu_t *menu)
{
    sfTexture_destroy(menu->texture);
    sfSprite_destroy(menu->sprite);
    for (int i = 0; i < 4; i++)
        sfText_destroy(menu->text[i]);
    sfFont_destroy(menu->font);
}