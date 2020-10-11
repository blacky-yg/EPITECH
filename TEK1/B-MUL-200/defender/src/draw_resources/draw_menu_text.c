/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_menu_text
*/

#include "../../include/defender.h"

void draw_menu_text(game_t *game)
{
    sfText_setString(game->menu.text[0], "Town Defender");
    sfText_setCharacterSize(game->menu.text[0], 110);
    sfText_setPosition(game->menu.text[0], (sfVector2f){360, 10});
    sfRenderWindow_drawText(game->screen.window, game->menu.text[0], NULL);
    sfText_setString(game->menu.text[1], "Launch");
    sfText_setCharacterSize(game->menu.text[1], 70);
    sfText_setPosition(game->menu.text[1], (sfVector2f){60, 200});
    sfRenderWindow_drawText(game->screen.window, game->menu.text[1], NULL);
    sfText_setString(game->menu.text[2], "How to play");
    sfText_setCharacterSize(game->menu.text[2], 70);
    sfText_setPosition(game->menu.text[2], (sfVector2f){60, 340});
    sfRenderWindow_drawText(game->screen.window, game->menu.text[2], NULL);
    sfText_setString(game->menu.text[3], "Quit");
    sfText_setCharacterSize(game->menu.text[3], 70);
    sfText_setPosition(game->menu.text[3], (sfVector2f){60, 480});
    sfRenderWindow_drawText(game->screen.window, game->menu.text[3], NULL);
}