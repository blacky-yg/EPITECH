/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** help
*/

#include "../../include/defender.h"

void help(game_t *game)
{
    sfRenderWindow_drawSprite(game->screen.window,
                            game->menu.sprite, NULL);
    sfText_setString(game->help.text[0], "\t\tHow to play\n");
    sfText_setCharacterSize(game->help.text[0], 110);
    sfText_setPosition(game->help.text[0], (sfVector2f){10, 20});
    sfRenderWindow_drawText(game->screen.window, game->help.text[0], NULL);
    sfText_setString(game->help.text[0], HELP);
    sfText_setCharacterSize(game->help.text[0], 40);
    sfText_setPosition(game->help.text[0], (sfVector2f){40, 170});
    sfRenderWindow_drawText(game->screen.window, game->help.text[0], NULL);
    sfText_setString(game->help.text[1], "BACK");
    sfText_setCharacterSize(game->help.text[1], 70);
    sfText_setPosition(game->help.text[1], (sfVector2f){40, 540});
    sfRenderWindow_drawText(game->screen.window, game->help.text[1], NULL);
}