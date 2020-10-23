/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** game.h
*/

#ifndef _GAME_H
#define _GAME_H

#include "header.h"
#include "define.h"
#include "struct.h"
#include "global.h"

/* INIT */

t_rpg init_game(t_rpg, tex_font);
tex_font init_font_tex(tex_font);
t_rpg init_button(t_rpg, tex_font);
t_rpg init_sounds(t_rpg);
t_rpg init_music(t_rpg);
t_rpg init_sprite(t_rpg, tex_font);
sfRenderWindow *window_create(char *, sfBool, unsigned int);

/* GAME_SCENE */

t_rpg menu(t_rpg, tex_font);
t_rpg play_game(t_rpg, tex_font);
t_rpg pause_game(t_rpg, tex_font);
t_rpg opt_game(t_rpg, tex_font);
t_rpg help(t_rpg, tex_font);
t_rpg new_game(t_rpg, tex_font);
t_rpg game_over(t_rpg, tex_font);
t_rpg game_win(t_rpg, tex_font);


/* DESTROY */
void destroy_game(t_rpg, tex_font);
t_rpg destroy_button(t_rpg);
void destroy_music(t_rpg);
void destroy_sounds(t_rpg);
void destroy_sprite(t_rpg);
void destroy_clock(t_rpg);


/* OTHER_FUNCTIONS */
unsigned int rand_seed(void);
int usage(void);
t_button button_effect(sfVector2i, t_button);
sfBool button_click(sfVector2i, t_button);
t_sprite button_png_effect(sfVector2i, t_sprite);
sfBool button_png_click(sfVector2i, t_sprite);
t_rpg redefine_window(t_rpg);
t_gif draw_gif(sfRenderWindow *, t_gif, tex_font, float);
char *get_name(void);

/* Lib */
int my_strcmp(const char *, const char *);
int my_strlen(const char *);

#endif /* !GAME_H_ */
