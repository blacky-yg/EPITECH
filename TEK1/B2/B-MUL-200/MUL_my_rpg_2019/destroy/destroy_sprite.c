/*
** EPITECH PROJECT, 2020
** sprite
** File description:
** sprite
*/

#include "../include/game.h"

void destroy_sprite(t_rpg game)
{
    sfSprite_destroy(game.menu_bg.gif.sprite);
    sfSprite_destroy(game.logo.sprite);
    sfSprite_destroy(game.settings.sprite);
    sfSprite_destroy(game.music.on.sprite);
    sfSprite_destroy(game.music.off.sprite);
    sfSprite_destroy(game.sound.on.sprite);
    sfSprite_destroy(game.sound.off.sprite);
    sfSprite_destroy(game.info.sprite);
    sfSprite_destroy(game.on_off.on.sprite);
    sfSprite_destroy(game.header_f.sprite);
    sfSprite_destroy(game.header_w.sprite);
    sfSprite_destroy(game.on_off.off.sprite);
    sfSprite_destroy(game.final_quit.sprite);
    sfSprite_destroy(game.restart.sprite);
}