/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "../include/game.h"

static void destroy_font(tex_font f_t)
{
    for (int i = 0; i < nb_font; i++)
        sfFont_destroy(f_t.font[i]);
    free(f_t.font);
}

static void destroy_texture(tex_font f_t)
{
    for (int i = 0; i < nb_tex; i++)
        sfTexture_destroy(f_t.texture[i]);
    free(f_t.texture);
}

void destroy_game(t_rpg game, tex_font f_t)
{
    destroy_font(f_t);
    destroy_texture(f_t);
    destroy_clock(game);
    destroy_sounds(game);
    destroy_music(game);
    destroy_sprite(game);
    game = destroy_button(game);
    sfRenderWindow_destroy(game.win);
}