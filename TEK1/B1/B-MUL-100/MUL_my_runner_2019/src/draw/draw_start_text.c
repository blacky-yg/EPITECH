/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** draw_start_text
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void draw_start_text(game_t *game)
{
    sfText_setString(game->start.text, "~RUN~~RUN~");
    sfText_setCharacterSize(game->start.text, 110);
    sfText_setPosition(game->start.text, (sfVector2f){430, 60});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
    sfText_setString(game->start.text, "PLAY");
    sfText_setCharacterSize(game->start.text, 90);
    sfText_setPosition(game->start.text, (sfVector2f){220, 220});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
    sfText_setString(game->start.text, "LEAVE");
    sfText_setCharacterSize(game->start.text, 90);
    sfText_setPosition(game->start.text, (sfVector2f){220, 360});
    sfRenderWindow_drawText(game->screen.window, game->start.text, NULL);
}