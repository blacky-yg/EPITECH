/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** defender.h
*/

#ifndef _DEFENDER_H_
#define _DEFENDER_H_

#include "header.h"
#include "struct.h"
#include "my.h"
#include "define.h"

//other functions
void usage(void);

//create resources
int init_screen(screen_t *screen);
int create_menu(menu_t *menu);
int create_help(help_t *help);
int create_play(play_t *play);
int create_4tower(tower_t *tower);
int create_tower(tower_t *tower);
int create_sound(sound_t *sound);
int create_pause(pause_t *pause);
int create_music(music_t *music);
int create_enemy(enemy_t *enemy);

void create_resources(game_t *game);

//analyse events
void manage_keyboard_click(game_t *game);
void manage_mouse_click(game_t *game, int x, int y);
void manage_mouse_hover(game_t *game, int x, int y);
void manage_menu(game_t *game, int x, int y);
void manage_help(game_t *game, int x, int y);
void manage_play(game_t *game, int x, int y);
void manage_pause(game_t *game, int x, int y);
void hover_menu(menu_t menu, int x, int y);
void hover_help(help_t help, int x, int y);
void hover_pause(pause_t pause, int x, int y);

void analyse_events(game_t *game);

//draw resources
void draw_menu_text(game_t *game);
void menu(game_t *game);
void help(game_t *game);
void draw_play_text(game_t *game);
void play(game_t *game);
void draw_pause_text(game_t *game);
void tower(game_t *game);
void tower_2(game_t *game);
void resume(game_t *game);
void set_enemy(game_t *game);
void draw_enemy(game_t *game);

void draw_resources(game_t *game);

//destroy resources
void destroy_menu(menu_t *menu);
void destroy_play(play_t *play);
void destroy_help(help_t *help);
void destroy_pause(pause_t *pause);
void destroy_sound(sound_t *sound);
void destroy_music(music_t *music);
void destroy_tower(tower_t *tower);

void destroy_all(game_t *game);

#endif /* !_DEFENDER_H_ */