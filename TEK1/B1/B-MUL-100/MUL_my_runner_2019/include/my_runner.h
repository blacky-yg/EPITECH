/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner.h
*/

#ifndef _MY_HUNTER_H
#define _MY_HUNTER_H

#include "c_lib.h"
#include "struct.h"
#include "my.h"

#define START_PATH ("resources/background/start.png")
#define FONT_PATH ("resources/fonts/mrsmonsteracad.ttf")
#define MUSIC_PATH ("resources/music/music.ogg")

void usage(void);
int check_bad_stat(int ac, char **av);

int init_screen(screen_t *screen);
int create_start_ressources(start_t *start);
int create_play_ressources(play_t *play);
int create_ressources(game_t *game);
sfTexture *create_texture_from_file(char const *filename);
sfSprite *create_sprite(void);

void analyse_events(game_t *game);
void manage_mouse_click(game_t *game);
void manage_keyboard_click(game_t *game);
void manage_scene1(game_t *game, int x, int y);
void manage_scene2(game_t *game, int x, int y);
void manage_return_menu(game_t *game, int x, int y);

void draw_start_text(game_t *game);
void draw_play_text(game_t *game);
void draw_ressources(game_t *game);

void destroy_all(game_t *game);

#endif /* MY_HUNTER_H */