/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** draw_play_text
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void draw_play_text(game_t *game)
{
    sfText_setString(game->play.text, "~BACK~");
    sfText_setCharacterSize(game->play.text, 110);
    sfText_setPosition(game->play.text, (sfVector2f){1050, 600});
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
    sfText_setString(game->play.text, "Score: ");
    sfText_setCharacterSize(game->play.text, 90);
    sfText_setPosition(game->play.text, (sfVector2f){20, 20});
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
}