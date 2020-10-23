/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** struct.h
*/

#ifndef _STRUCT_H
#define _STRUCT_H

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
    sfMusic *music;
} start_t;

typedef struct play_s
{
    sfTexture *texture[7];
    sfSprite *sprite[7];
    sfText *text;
    sfFont *font;
    char *score;
} play_t;

typedef struct game_s
{
    screen_t screen;
    start_t start;
    play_t play;
    int scene;
} game_t;

#endif /* !_STRUCT_H */