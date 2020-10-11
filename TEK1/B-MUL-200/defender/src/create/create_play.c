/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_play
*/

#include "../../include/defender.h"

int create_play(play_t *play)
{
    play->texture = sfTexture_createFromFile(PLAY_BACK, NULL);
    if (!play->texture)
        return (84);
    play->sprite = sfSprite_create();
    if (!play->sprite)
        return (84);
    sfSprite_setTexture(play->sprite, play->texture, sfTrue);
    play->text = sfText_create();
    if (!play->text)
        return (84);
    play->font = sfFont_createFromFile(FONT);
    if (!play->font)
        return (84);
    sfText_setFont(play->text, play->font);
    sfText_setColor(play->text, sfBlack);
    play->color = sfColor_fromRGB(78, 147, 160);
    play->rectangle = sfRectangleShape_create();
    sfRectangleShape_setPosition(play->rectangle, (sfVector2f){100, 100});
    play->score = "1000$";
    return (0);
}