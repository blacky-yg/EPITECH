/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_menu
*/

#include "../../include/defender.h"

int create_menu(menu_t *menu)
{
    menu->texture = sfTexture_createFromFile(MENU_BACK, NULL);
    if (!menu->texture)
        return (84);
    menu->sprite = sfSprite_create();
    if (!menu->sprite)
        return (84);
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
    for (int i = 0; i < 4; i++) {
        menu->text[i] = sfText_create();
        if (!menu->text[i])
            return (84);
    }
    if (!(menu->font = sfFont_createFromFile(FONT)))
        return (84);
    for (int i = 0; i < 4; i++) {
        sfText_setFont(menu->text[i], menu->font);
        sfText_setColor(menu->text[i], sfBlack);
    }
    menu->color = sfColor_fromRGB(78, 147, 160);
    return (0);
}