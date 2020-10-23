/*
** EPITECH PROJECT, 2020
** gif animation
** File description:
** gif animation
*/

#include "../include/game.h"

t_gif draw_gif(sfRenderWindow *win, t_gif gif, tex_font ft, float v)
{
    sfTime time = sfClock_getElapsedTime(gif.gif.anim_clock);
    if (sfTime_asSeconds(time) > v) {
        if (gif.i >= gif.start && gif.i <= gif.end) {
            sfSprite_setTexture(gif.gif.sprite, ft.texture[gif.i], sfTrue);
        } else {
            gif.i = gif.start;
            sfSprite_setTexture(gif.gif.sprite, ft.texture[gif.i], sfTrue);
        }
        gif.i++;
        sfClock_restart(gif.gif.anim_clock);
    }
    sfRenderWindow_drawSprite(win, gif.gif.sprite, NULL);
    return (gif);
}