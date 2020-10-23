/*
** EPITECH PROJECT, 2020
** play
** File description:
** play
*/

#include "../../include/game.h"

static t_rpg play_click(t_rpg game)
{
    if (button_click(game.mouse, game.menu))
        game.id = menu_id;
    if (button_click(game.mouse, game.new_game))
        game.id = game_id;
    return (game);
}

static t_rpg play_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = play_click(game);
            break;
        }
    }
    game.menu = button_effect(game.mouse, game.menu);
    game.new_game = button_effect(game.mouse, game.new_game);
    game.load_game = button_effect(game.mouse, game.load_game);
    return (game);
}

static t_rpg play_draw(t_rpg game)
{
    sfRenderWindow_drawText(game.win, game.new_game.text, NULL);
    sfRenderWindow_drawText(game.win, game.load_game.text, NULL);
    sfRenderWindow_drawText(game.win, game.menu.text, NULL);
    return (game);
}

static t_rpg play_buttons(t_rpg game)
{
    return (game);
}

t_rpg play_game(t_rpg game, tex_font f_t)
{
    game.menu_bg = draw_gif(game.win, game.menu_bg, f_t, 0.1);
    sfRenderWindow_drawSprite(game.win, game.logo.sprite, NULL);
    game = play_draw(game);
    game = play_event(game, f_t);
    return (game);
}
