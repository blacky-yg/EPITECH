/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_tower
*/

#include "../../include/defender.h"

int create_4tower(tower_t *tower)
{
    tower->texture[0] = sfTexture_createFromFile(TOW1, NULL);
    tower->texture[1] = sfTexture_createFromFile(TOW2, NULL);
    tower->texture[2] = sfTexture_createFromFile(TOW3, NULL);
    tower->texture[3] = sfTexture_createFromFile(TOW4, NULL);
    if (!tower->texture[0] || !tower->texture[1] ||
            !tower->texture[2] || !tower->texture[3])
        return (84);
    for (int i = 0; i < 4; i++) {
        tower->sprite[i] = sfSprite_create();
        if (!tower->sprite[i])
            return (84);
    }
    for (int i = 0; i < 4; i++)
        sfSprite_setTexture(tower->sprite[i], tower->texture[i], sfTrue);
    return (0);
}

int create_tower(tower_t *tower)
{
    if (create_4tower(tower) == 84)
        return (84);
    tower->texture[4] = sfTexture_createFromFile(TOW5, NULL);
    tower->texture[5] = sfTexture_createFromFile(TOW6, NULL);
    tower->texture[6] = sfTexture_createFromFile(TOW7, NULL);
    tower->texture[7] = sfTexture_createFromFile(TOW8, NULL);
    if (!tower->texture[4] || !tower->texture[5] ||
            !tower->texture[6] || !tower->texture[7])
        return (84);
    for (int i = 4; i < 8; i++) {
        tower->sprite[i] = sfSprite_create();
        if (!tower->sprite[i])
            return (84);
    }
    for (int i = 4; i < 8; i++)
        sfSprite_setTexture(tower->sprite[i], tower->texture[i], sfTrue);
    return (0);
}