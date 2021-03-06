/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create_start_ressources
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

int create_start_ressources(start_t *start)
{
    start->texture = sfTexture_createFromFile(START_PATH, NULL);
    if (!start->texture)
        return (84);
    start->sprite = sfSprite_create();
    if (!start->sprite)
        return (84);
    sfSprite_setTexture(start->sprite, start->texture, sfTrue);
    start->text = sfText_create();
    if (!start->text)
        return (84);
    start->font = sfFont_createFromFile(FONT_PATH);
    if (!start->font)
        return (84);
    start->music = sfMusic_createFromFile(MUSIC_PATH);
    if (start->music)
        return (84);
    sfText_setFont(start->text, start->font);
    sfText_setColor(start->text, sfBlack);
    return (0);
}