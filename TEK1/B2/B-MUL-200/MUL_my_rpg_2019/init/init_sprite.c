/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../include/game.h"

static t_gif init_gif(t_gif gif, int start, int end, sfVector2f pos)
{
    gif.gif.sprite = sfSprite_create();
    gif.start = start;
    gif.end = end;
    gif.i = start;
    gif.gif.anim_clock = sfClock_create();
    gif.gif.pos = pos;
    sfSprite_setPosition(gif.gif.sprite, gif.gif.pos);
    return (gif);
}

static void create_sprite(t_sprite *sprite, sfTexture *texture, sfVector2f pos)
{
    sprite->sprite = sfSprite_create();
    sfSprite_setTexture(sprite->sprite, texture, sfTrue);
    sprite->pos = pos;
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

t_rpg init_sprite(t_rpg game, tex_font f_t)
{
    game.menu_bg = init_gif(game.menu_bg, 0, 7, (sfVector2f){0, 0});
    create_sprite(&game.logo, f_t.texture[8], (sfVector2f){260, 60});
    create_sprite(&game.settings, f_t.texture[9], (sfVector2f){75, 275});
    create_sprite(&game.info, f_t.texture[14], (sfVector2f){75, 475});
    create_sprite(&game.music.on, f_t.texture[10], (sfVector2f){1200, 275});
    create_sprite(&game.music.off, f_t.texture[11], (sfVector2f){1200, 275});
    game.music.pos = (sfVector2f){1200, 275};
    create_sprite(&game.sound.on, f_t.texture[12], (sfVector2f){1200, 475});
    create_sprite(&game.sound.off, f_t.texture[13], (sfVector2f){1200, 475});
    game.music.pos = (sfVector2f){1200, 4750};
    create_sprite(&game.on_off.on, f_t.texture[16], (sfVector2f){0, 0});
    create_sprite(&game.on_off.off, f_t.texture[15], (sfVector2f){0, 0});
    create_sprite(&game.header_f, f_t.texture[17], (sfVector2f){300, 100});
    create_sprite(&game.header_w, f_t.texture[18], (sfVector2f){300, 100});
    create_sprite(&game.final_quit, f_t.texture[19], (sfVector2f){800, 400});
    create_sprite(&game.restart, f_t.texture[20], (sfVector2f){375, 400});
    return (game);
}