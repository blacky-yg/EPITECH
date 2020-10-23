/*
** EPITECH PROJECT, 2020
** init button
** File description:
** init button
*/

#include "../include/game.h"

static t_button button_create(t_button but, p_button feat, sfFont *ft, char *s)
{
    but.text = sfText_create();
    sfText_setString(but.text, s);
    sfText_setColor(but.text, feat.color);
    sfText_setFont(but.text, ft);
    sfText_setCharacterSize(but.text, feat.size);
    sfText_setPosition(but.text, (sfVector2f){0, 0});
    but.ft = feat;
    return (but);
}

t_button add_button(t_button button, tex_font f_t, sfVector2f pos, char *btn)
{
    sfColor color1 = sfColor_fromRGB(21, 144, 255);
    p_button p = {color1, 100};

    button = button_create(button, p, f_t.font[0], btn);
    button.pos = pos;
    sfText_setPosition(button.text, button.pos);
    return (button);
}

t_rpg init_button(t_rpg game, tex_font f_t)
{
    game.play = add_button(game.play, f_t, (sfVector2f){550, 275}, PLAY);
    game.quit = add_button(game.quit, f_t, (sfVector2f){550, 425}, QUIT);
    game.back = add_button(game.back, f_t, (sfVector2f){900, 600}, BACK);
    game.h_content = add_button(game.h_content, f_t, (sfVector2f){300, 300}, \
        HELP_CONTENT);
    game.new_game = add_button(game.new_game, f_t, (sfVector2f){400, 250}, \
        NEW_GAME);
    game.load_game = add_button(game.load_game, f_t, (sfVector2f){400, 375}, \
        LOAD_GAME);
    game.menu = add_button(game.menu, f_t, (sfVector2f){400, 525}, \
        MENU);
    game.full_btn = add_button(game.full_btn, f_t, (sfVector2f){200, 250}, \
        FULLSCREEN);
    game.sound_btn = add_button(game.sound_btn, f_t, (sfVector2f){200, 400}, \
        SOUND);
    game.music_btn = add_button(game.music_btn, f_t, (sfVector2f){200, 550}, \
        MUSIC);
    return (game);
}
