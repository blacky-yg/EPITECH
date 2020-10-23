/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** my_hunter.h
*/

#ifndef MY_HUNTER_H
#define MY_HUNTER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

typedef struct screen_s
{
    sfRenderWindow *window;
    sfEvent event;
} screen_t;

typedef struct start_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfText *text;
    sfFont *font;
} start_t;

typedef struct play_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfText *text;
    sfFont *font;
    char *score;
} play_t;

typedef struct help_s
{
    sfText *text;
    sfFont *font;
} help_t;

typedef struct bird_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float pos_x;
    float pos_y;
} bird_t;

typedef struct game_s
{
    screen_t screen;
    start_t start;
    play_t play;
    bird_t bird;
    help_t help;
    int scene;
    int score;
    int life;
} game_t;

void usage(void);

int init_screen(screen_t *screen);
int create_start_ressources(start_t *start);
int create_play_ressources(play_t *play);
int create_help_ressources(help_t *help);
int create_bird_ressources(bird_t *bird);
void create_rect(bird_t *bird);
int create_ressources(game_t *game);

void analyse_events(game_t *game);
void manage_mouse_click(game_t *game);
void manage_keyboard_click(game_t *game);
void manage_scene1(game_t *game, int x, int y);
void manage_scene2(game_t *game, int x, int y);
void manage_return_menu(game_t *game, int x, int y);

void manage_bird_speed(game_t *game);
void set_bird_pos(game_t *game);

void draw_start_text(game_t *game);
void draw_play_text(game_t *game);
void draw_help_text(game_t *game);
void draw_bird(game_t *game);
void move_rect(sfIntRect *rect, int offset, int max_value);
void draw_ressources(game_t *game);

void destroy_all(game_t *game);

#endif /* MY_HUNTER_H */