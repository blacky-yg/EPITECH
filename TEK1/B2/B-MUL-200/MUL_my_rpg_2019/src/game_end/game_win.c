/*
** EPITECH PROJECT, 2020
** game win
** File description:
** game win
*/

#include "../../include/game.h"

static t_rpg gamewin_click(t_rpg game)
{
    if (button_png_click(game.mouse, game.restart))
        game.id = menu_id;
    if (button_png_click(game.mouse, game.final_quit))
        game.id = quit_id;
    return (game);
}

static t_rpg gamewin_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = gamewin_click(game);
            break;
        }
    }
    game.restart = button_png_effect(game.mouse, game.restart);
    game.final_quit = button_png_effect(game.mouse, game.final_quit);
    return (game);
}

static t_rpg game_win_draw(t_rpg game)
{
    sfRenderWindow_drawSprite(game.win, game.header_w.sprite, NULL);
    sfRenderWindow_drawSprite(game.win, game.final_quit.sprite, NULL);
    sfRenderWindow_drawSprite(game.win, game.restart.sprite, NULL);
    return (game);
}

static t_rpg game_win_buttons(t_rpg game)
{
    return (game);
}

t_rpg game_win(t_rpg game, tex_font f_t)
{
    game = gamewin_event(game, f_t);
    game = game_win_draw(game);
    return (game);
}
