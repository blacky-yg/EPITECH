/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** tower
*/

#include "../../include/defender.h"

void tower_2(game_t *game)
{
    sfSprite_setPosition(game->tower.sprite[0], (sfVector2f){250.2f, 550.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[0], NULL);
    sfSprite_setPosition(game->tower.sprite[1], (sfVector2f){350.2f, 550.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[1], NULL);
    sfSprite_setPosition(game->tower.sprite[2], (sfVector2f){250.2f, 650.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[2], NULL);
    sfSprite_setPosition(game->tower.sprite[3], (sfVector2f){340.2f, 660.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[3], NULL);
}

void tower(game_t *game)
{
    tower_2(game);
    sfSprite_setPosition(game->tower.sprite[4], (sfVector2f){275.2f, 460.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[4], NULL);
    sfSprite_setPosition(game->tower.sprite[5], (sfVector2f){390.2f, 460.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[5], NULL);
    sfSprite_setPosition(game->tower.sprite[6], (sfVector2f){800.2f, 660.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[6], NULL);
    sfSprite_setPosition(game->tower.sprite[7], (sfVector2f){700.2f, 660.2f});
    sfRenderWindow_drawSprite(game->screen.window,
                                game->tower.sprite[7], NULL);
}