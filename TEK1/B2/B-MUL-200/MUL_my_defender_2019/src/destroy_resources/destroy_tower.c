/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_tower
*/

#include "../../include/defender.h"

void destroy_tower(tower_t *tower)
{
    for (int i = 0; i < 8; i++) {
        sfTexture_destroy(tower->texture[i]);
        sfSprite_destroy(tower->sprite[i]);
    }
}