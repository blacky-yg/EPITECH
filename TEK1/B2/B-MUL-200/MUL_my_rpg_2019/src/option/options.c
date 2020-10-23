/*
** EPITECH PROJECT, 2020
** options
** File description:
** options
*/

#include "../../include/game.h"

static t_rpg opt_click(t_rpg game)
{
    if (button_click(game.mouse, game.back))
        game.id = menu_id;
    if (button_click(game.mouse, game.full_btn))
        game.full = !game.full;
    if (button_click(game.mouse, game.sound_btn))
        game.sound.sound_bl = !game.sound.sound_bl;
    if (button_click(game.mouse, game.music_btn))
        game.music.music_bl = !game.music.music_bl;
    return (game);
}

static t_rpg opt_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = opt_click(game);
            break;
        }
    }
    game.back = button_effect(game.mouse, game.back);
    game.full_btn = button_effect(game.mouse, game.full_btn);
    game.music_btn = button_effect(game.mouse, game.music_btn);
    game.sound_btn = button_effect(game.mouse, game.sound_btn);
    return (game);
}

static void draw_on_off(sfRenderWindow **win, t_button button, sfBool on, \
        t_on_off_btn btn)
{
    sfFloatRect rect = sfText_getGlobalBounds(button.text);

    sfSprite_setPosition(btn.on.sprite, (sfVector2f){button.pos.x + \
        rect.width + 200, button.pos.y + 50});
    sfSprite_setPosition(btn.off.sprite, (sfVector2f){button.pos.x + \
        rect.width + 200, button.pos.y + 50});
    if (on)
        sfRenderWindow_drawSprite(*win, btn.on.sprite, NULL);
    else
        sfRenderWindow_drawSprite(*win, btn.off.sprite, NULL);
}

static t_rpg opt_draw(t_rpg game)
{
    sfRenderWindow_drawText(game.win, game.back.text, NULL);
    draw_on_off(&game.win, game.full_btn, game.full, game.on_off);
    sfRenderWindow_drawText(game.win, game.full_btn.text, NULL);
    draw_on_off(&game.win, game.sound_btn, game.sound.sound_bl, game.on_off);
    sfRenderWindow_drawText(game.win, game.sound_btn.text, NULL);
    draw_on_off(&game.win, game.music_btn, game.music.music_bl, game.on_off);
    sfRenderWindow_drawText(game.win, game.music_btn.text, NULL);
    return (game);
}

t_rpg opt_game(t_rpg game, tex_font f_t)
{
    game.menu_bg = draw_gif(game.win, game.menu_bg, f_t, 0.1);
    sfRenderWindow_drawSprite(game.win, game.logo.sprite, NULL);
    game = opt_draw(game);
    game = opt_event(game, f_t);
    return (game);
}
