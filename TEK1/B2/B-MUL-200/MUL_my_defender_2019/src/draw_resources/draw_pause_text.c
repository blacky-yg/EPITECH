/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_pause_text
*/

#include "../../include/defender.h"

void draw_pause_text(game_t *game)
{
    sfText_setString(game->pause.text[0], "Town Defender");
    sfText_setCharacterSize(game->pause.text[0], 110);
    sfText_setPosition(game->pause.text[0], (sfVector2f){360, 10});
    sfRenderWindow_drawText(game->screen.window, game->pause.text[0], NULL);
    sfText_setString(game->pause.text[1], "Contine");
    sfText_setCharacterSize(game->pause.text[1], 90);
    sfText_setPosition(game->pause.text[1], (sfVector2f){560, 200});
    sfRenderWindow_drawText(game->screen.window, game->pause.text[1], NULL);
    sfText_setString(game->pause.text[2], "Start Menu");
    sfText_setCharacterSize(game->pause.text[2], 90);
    sfText_setPosition(game->pause.text[2], (sfVector2f){500, 340});
    sfRenderWindow_drawText(game->screen.window, game->pause.text[2], NULL);
    sfText_setString(game->pause.text[3], "Leave");
    sfText_setCharacterSize(game->pause.text[3], 90);
    sfText_setPosition(game->pause.text[3], (sfVector2f){600, 480});
    sfRenderWindow_drawText(game->screen.window, game->pause.text[3], NULL);
}