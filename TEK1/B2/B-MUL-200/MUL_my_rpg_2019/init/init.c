/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "../include/game.h"

static void init_textures(tex_font *f_t)
{
    f_t->texture[8] = sfTexture_createFromFile(LOGO, NULL);
    f_t->texture[9] = sfTexture_createFromFile(SETTINGS, NULL);
    f_t->texture[10] = sfTexture_createFromFile(BTN_MUSIC_ON, NULL);
    f_t->texture[11] = sfTexture_createFromFile(BTN_MUSIC_OFF, NULL);
    f_t->texture[12] = sfTexture_createFromFile(BTN_SND_ON, NULL);
    f_t->texture[13] = sfTexture_createFromFile(BTN_SND_OFF, NULL);
    f_t->texture[14] = sfTexture_createFromFile(INFO_PNG, NULL);
    f_t->texture[15] = sfTexture_createFromFile(BTN_OFF, NULL);
    f_t->texture[16] = sfTexture_createFromFile(BTN_ON, NULL);
    f_t->texture[17] = sfTexture_createFromFile(HEADER_FAIL, NULL);
    f_t->texture[18] = sfTexture_createFromFile(HEADER_WIN, NULL);
    f_t->texture[19] = sfTexture_createFromFile(BTN_RIGHT, NULL);
    f_t->texture[20] = sfTexture_createFromFile(BTN_RESTART, NULL);
}

tex_font init_font_tex(tex_font f_t)
{
    f_t.texture = malloc(sizeof(sfTexture *) * nb_tex);
    f_t.texture[0] = sfTexture_createFromFile(BG_FRAME0, NULL);
    f_t.texture[1] = sfTexture_createFromFile(BG_FRAME1, NULL);
    f_t.texture[2] = sfTexture_createFromFile(BG_FRAME2, NULL);
    f_t.texture[3] = sfTexture_createFromFile(BG_FRAME3, NULL);
    f_t.texture[4] = sfTexture_createFromFile(BG_FRAME4, NULL);
    f_t.texture[5] = sfTexture_createFromFile(BG_FRAME5, NULL);
    f_t.texture[6] = sfTexture_createFromFile(BG_FRAME6, NULL);
    f_t.texture[7] = sfTexture_createFromFile(BG_FRAME7, NULL);
    init_textures(&f_t);
    f_t.font = malloc(sizeof(sfFont *) * nb_font);
    f_t.font[0] = sfFont_createFromFile(GLUE_FONT);
    return (f_t);
}

t_rpg init_game(t_rpg game, tex_font f_t)
{
    game.id = 0;
    game.full = sfFalse;
    game.sound.sound_bl = sfTrue;
    game.music.music_bl = sfTrue;
    game = init_button(game, f_t);
    game = init_sounds(game);
    game = init_music(game);
    game = init_sprite(game, f_t);
    return (game);
}
