/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_enemy
*/

#include "../../include/defender.h"

int create_enemy(enemy_t *enemy)
{
    enemy->texture = sfTexture_createFromFile(ENEMY, NULL);
    if (!enemy->texture)
        return (84);
    enemy->sprite = sfSprite_create();
    if (!enemy->sprite)
        return (84);
    sfSprite_setTexture(enemy->sprite, enemy->texture, sfTrue);
    enemy->clock = sfClock_create();
    if (!enemy->clock)
        return (84);
    enemy->rect = (sfIntRect){6, 0, 57, 90};
    enemy->pos_x = -57;
    enemy->pos_y = 535;
    return (0);
}