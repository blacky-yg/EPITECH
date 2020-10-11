/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** struct.h
*/

#ifndef _STRUCT_H_
#define _STRUCT_H_

typedef struct screen_s
{
    sfRenderWindow *window;
    sfEvent event;
} screen_t;

typedef struct menu_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfText *text[4];
    sfFont *font;
    sfColor color;
} menu_t;

typedef struct enemy_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfClock *clock;
    sfTime time;
    sfIntRect rect;
    float pos_x;
    float pos_y;
} enemy_t;

typedef struct tower_s
{
    sfTexture *texture[8];
    sfSprite *sprite[8];
    char *price;
} tower_t;

typedef struct play_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfRectangleShape *rectangle;
    sfText *text;
    sfFont *font;
    sfColor color;
    enemy_t enemy;
    char *score;
} play_t;

typedef struct help_s
{
    sfText *text[2];
    sfFont *font;
    sfColor color;
} help_t;

typedef struct pause_s
{
    sfText *text[4];
    sfFont *font;
    sfColor color;
} pause_t;

typedef struct music_s
{
    sfMusic *musique;
} music_t;

typedef struct sound_s
{
    sfSound *click;
    sfSoundBuffer *click_buffer;
    sfSound *back_click;
    sfSoundBuffer *back_click_buffer;
} sound_t;

typedef struct game_s
{
    screen_t screen;
    menu_t menu;
    help_t help;
    play_t play;
    tower_t tower;
    sound_t sound;
    music_t music;
    pause_t pause;
    int scene;
} game_t;

#endif /* !_STRUCT_H_ */