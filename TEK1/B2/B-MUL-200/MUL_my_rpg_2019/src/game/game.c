/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "../../include/game.h"

static t_rpg game_click(t_rpg game)
{
    if (button_click(game.mouse, game.play))
        game.id = game_over_id;
    return (game);
}

static t_rpg game_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            if (sfKeyboard_isKeyPressed(sfKeySpace))
                game.id = pause_id;
            break;
        case sfEvtMouseButtonPressed: game = game_click(game);
            break;
        }
    }
    game.play = button_effect(game.mouse, game.play);
    return (game);
}

static t_rpg game_draw(t_rpg game)
{
    sfRenderWindow_drawText(game.win, game.play.text, NULL);
    return (game);
}

t_rpg new_game(t_rpg game, tex_font f_t)
{
    game = game_event(game, f_t);
    game = game_draw(game);
    return (game);
}
