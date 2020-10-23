/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct font_texture
{
    sfTexture **texture;
    sfFont **font;
}tex_font;

typedef struct button_features
{
    sfColor color;
    int size;
}p_button;

typedef struct button
{
    sfText *text;
    sfVector2f pos;
    p_button ft;
}t_button;

typedef struct sprite_s
{
    sfSprite *sprite;
    sfClock *anim_clock;
    sfClock *move_clock;
    sfVector2f pos;
    sfVector2f scale;
}t_sprite;

typedef struct sprite_gif
{
    int i;
    int start;
    int end;
    t_sprite gif;
}t_gif;

typedef struct Sound
{
    sfBool sound_bl;
    sfVector2f pos;
    t_sprite on;
    t_sprite off;
}t_sound_btn;

typedef struct Music
{
    sfBool music_bl;
    sfVector2f pos;
    t_sprite on;
    t_sprite off;
}t_music_btn;

typedef struct on_off
{
    t_sprite on;
    t_sprite off;
}t_on_off_btn;

typedef struct sound
{
    sfSound *sound;
    sfSoundBuffer *buffer;
}t_sound;

typedef struct rpg
{
    sfRenderWindow *win;
    sfView *view;
    sfBool full;
    int id;
    char *usr_name;
    sfEvent event;
    sfMusic *menu_music;
    sfMusic *game_music;
    t_gif menu_bg;
    t_sound click;
    sfVector2i mouse;
    t_sprite logo;
    t_button play;
    t_button full_btn;
    t_button sound_btn;
    t_button music_btn;
    t_button back;
    t_button quit;
    t_button new_game;
    t_button load_game;
    t_button menu;
    t_sprite settings;
    t_sound_btn sound;
    t_music_btn music;
    t_sprite info;
    t_on_off_btn on_off;
    t_button h_content;
    t_sprite header_f;
    t_sprite header_w;
    t_sprite final_quit;
    t_sprite restart;
}t_rpg;

#endif /* !STRUCT_H */