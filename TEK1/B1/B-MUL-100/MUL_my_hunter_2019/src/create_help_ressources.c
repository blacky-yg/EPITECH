/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_help_ressources
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int create_help_ressources(help_t *help)
{
    help->text = sfText_create();
    if (!help->text)
        return (84);
    help->font = sfFont_createFromFile("fonts/mrsmonsteracad.ttf");
    if (!help->font)
        return (84);
    sfText_setFont(help->text, help->font);
    sfText_setColor(help->text, sfBlack);
    return (0);
}