/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** analyse_events
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void analyse_events(game_t *game)
{
    switch (game->screen.event.type) {
        case sfEvtClosed:
            sfRenderWindow_close(game->screen.window);
            break;
        default:
            break;
    }
    manage_mouse_click(game);
    manage_keyboard_click(game);
}