/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_play
*/

#include "../../include/defender.h"

void destroy_play(play_t *play)
{
    sfTexture_destroy(play->texture);
    sfSprite_destroy(play->sprite);
    sfText_destroy(play->text);
    sfRectangleShape_destroy(play->rectangle);
}