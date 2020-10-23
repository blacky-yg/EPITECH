/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_bird_ressources
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int create_bird_ressources(bird_t *bird)
{
    bird->pos_x = 0;
    bird->pos_y = 0;
    bird->texture = sfTexture_createFromFile("img/bird.png", NULL);
    if (!bird->texture)
        return (84);
    bird->sprite = sfSprite_create();
    if (!bird->sprite)
        return (84);
    bird->clock = sfClock_create();
    if (!bird->clock)
        return (84);
    return (0);
}