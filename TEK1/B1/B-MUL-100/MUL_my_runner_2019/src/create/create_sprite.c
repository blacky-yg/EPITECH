/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create_sprite
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

sfSprite *create_sprite(void)
{
    sfSprite *sprite;

    sprite = sfSprite_create();
    if (!sprite)
        return (NULL);
    return (sprite);
}