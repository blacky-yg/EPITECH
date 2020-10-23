/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** draw_start_text
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void draw_start_text(game_t *game)
{
    sfText_setString(game->start.text, "My HUNTER");
    sfText_setCharacterSize(game->start.text, 110);
    sfText_setPosition(game->start.text, (sfVector2f){290, 75});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
    sfText_setString(game->start.text, "Play");
    sfText_setCharacterSize(game->start.text, 90);
    sfText_setPosition(game->start.text, (sfVector2f){30, 240});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
    sfText_setString(game->start.text, "Help");
    sfText_setCharacterSize(game->start.text, 90);
    sfText_setPosition(game->start.text, (sfVector2f){30, 340});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
    sfText_setString(game->start.text, "Exit");
    sfText_setCharacterSize(game->start.text, 90);
    sfText_setPosition(game->start.text, (sfVector2f){30, 440});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
}