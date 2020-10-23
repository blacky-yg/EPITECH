/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "../../include/game.h"

static t_rpg menu_click(t_rpg game)
{
    if (button_click(game.mouse, game.play))
        game.id = play_id;
    if (button_png_click(game.mouse, game.info))
        game.id = help_id;
    if (button_png_click(game.mouse, game.settings))
        game.id = opt_id;
    if (button_click(game.mouse, game.quit))
        game.id = quit_id;
    if (button_png_click(game.mouse, game.music.on))
        game.music.music_bl = !game.music.music_bl;
    if (button_png_click(game.mouse, game.sound.on))
        game.sound.sound_bl = !game.sound.sound_bl;
    return (game);
}

static t_rpg menu_event(t_rpg game, tex_font f_t)
{
    while (sfRenderWindow_pollEvent(game.win, &game.event)) {
        switch (game.event.type) {
        case sfEvtClosed: sfRenderWindow_close(game.win);
            break;
        case sfEvtKeyPressed:
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && game.full)
                game = redefine_window(game);
            break;
        case sfEvtMouseButtonPressed: game = menu_click(game);
            break;
        }
    }
    game.quit = button_effect(game.mouse, game.quit);
    game.play = button_effect(game.mouse, game.play);
    game.settings = button_png_effect(game.mouse, game.settings);
    game.info = button_png_effect(game.mouse, game.info);
    return (game);
}

static t_rpg menu_button_positions(t_rpg game)
{
    return (game);
}

static t_rpg menu_draw(t_rpg game)
{
    if (game.music.music_bl)
        sfRenderWindow_drawSprite(game.win, game.music.on.sprite, NULL);
    else
        sfRenderWindow_drawSprite(game.win, game.music.off.sprite, NULL);
    if (game.sound.sound_bl)
        sfRenderWindow_drawSprite(game.win, game.sound.on.sprite, NULL);
    else
        sfRenderWindow_drawSprite(game.win, game.sound.off.sprite, NULL);
    sfRenderWindow_drawSprite(game.win, game.settings.sprite, NULL);
    sfRenderWindow_drawSprite(game.win, game.info.sprite, NULL);
    sfRenderWindow_drawText(game.win, game.play.text, NULL);
    sfRenderWindow_drawText(game.win, game.quit.text, NULL);
    return (game);
}

t_rpg menu(t_rpg game, tex_font f_t)
{
    game.menu_bg = draw_gif(game.win, game.menu_bg, f_t, 0.1);
    sfRenderWindow_drawSprite(game.win, game.logo.sprite, NULL);
    game = menu_draw(game);
    game = menu_event(game, f_t);
    game.music.on = button_png_effect(game.mouse, game.music.on);
    game.music.off = button_png_effect(game.mouse, game.music.off);
    game.sound.on = button_png_effect(game.mouse, game.sound.on);
    game.sound.off = button_png_effect(game.mouse, game.sound.off);
    return (game);
}
