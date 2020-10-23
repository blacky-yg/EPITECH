/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_play_text
*/

#include "../../include/defender.h"

void draw_play_text(game_t *game)
{
    sfText_setString(game->play.text, "Score: ");
    sfText_setCharacterSize(game->play.text, 60);
    sfText_setPosition(game->play.text, (sfVector2f){5.2f, 2.2f});
    sfText_setColor(game->play.text, sfBlack);
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
    sfText_setString(game->play.text, game->play.score);
    sfText_setCharacterSize(game->play.text, 60);
    sfText_setPosition(game->play.text, (sfVector2f){150.2f, 2.2f});
    sfText_setColor(game->play.text, game->play.color);
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
}