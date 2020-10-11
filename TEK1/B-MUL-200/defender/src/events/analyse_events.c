/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** analyse_events
*/

#include "../../include/defender.h"

void analyse_events(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->screen.window).x;
    int y = sfMouse_getPositionRenderWindow(game->screen.window).y;

    if (game->screen.event.type == sfEvtClosed)
        sfRenderWindow_close(game->screen.window);
    if (game->screen.event.type == sfEvtKeyPressed &&
                    sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(game->screen.window);
    manage_mouse_hover(game, x, y);
    manage_mouse_click(game, x, y);
    manage_keyboard_click(game);
}