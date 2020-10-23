/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_start_ressources
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int create_play_ressources(play_t *play)
{
    play->texture = sfTexture_createFromFile("img/play.jpg", NULL);
    if (!play->texture)
        return (84);
    play->sprite = sfSprite_create();
    if (!play->sprite)
        return (84);
    sfSprite_setTexture(play->sprite, play->texture, sfTrue);
    play->text = sfText_create();
    if (!play->text)
        return (84);
    play->font = sfFont_createFromFile("fonts/mrsmonsteracad.ttf");
    if (!play->font)
        return (84);
    sfText_setFont(play->text, play->font);
    sfText_setColor(play->text, sfGreen);
    return (0);
}