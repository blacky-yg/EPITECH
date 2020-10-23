/*
** EPITECH PROJECT, 2020
** pause
** File description:
** pause
*/

#include "../../include/game.h"

static t_rpg pause_click(t_rpg game)
{
    return (game);
}

static t_rpg pause_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = pause_click(game);
            break;
        }
    };
    return (game);
}

static t_rpg pause_buttons(t_rpg game)
{
    return (game);
}

t_rpg pause_game(t_rpg game, tex_font f_t)
{
    game = pause_event(game, f_t);
    return (game);
}
