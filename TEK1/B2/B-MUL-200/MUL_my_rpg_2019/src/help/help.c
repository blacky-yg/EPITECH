/*
** EPITECH PROJECT, 2020
** help
** File description:
** help
*/

#include "../../include/game.h"

static t_rpg help_click(t_rpg game)
{
    if (button_click(game.mouse, game.back))
        game.id = menu_id;
    return (game);
}

static t_rpg help_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = help_click(game);
            break;
        }
    }
    game.back = button_effect(game.mouse, game.back);
    return (game);
}

static t_rpg help_draw(t_rpg game)
{
    sfRenderWindow_drawText(game.win, game.back.text, NULL);
    sfRenderWindow_drawText(game.win, game.h_content.text, NULL);
    return (game);
}

static t_rpg help_buttons(t_rpg game)
{
    return (game);
}

t_rpg help(t_rpg game, tex_font f_t)
{
    game.menu_bg = draw_gif(game.win, game.menu_bg, f_t, 0.1);
    game = help_draw(game);
    game = help_event(game, f_t);
    return (game);
}
