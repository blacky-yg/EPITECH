/*
** EPITECH PROJECT, 2020
** window defender
** File description:
** window
*/

#include "../include/game.h"

sfRenderWindow *window_create(char *name, sfBool bol, unsigned int fps)
{
    sfVideoMode video_mode = {1366, 768, 32};
    sfRenderWindow *window;

    if (bol == sfTrue)
        window = sfRenderWindow_create(video_mode, name,
            sfFullscreen | sfResize | sfClose, NULL);
    else
        window = sfRenderWindow_create(video_mode, name,
            sfResize | sfClose, NULL);
    if (!window)
        return (NULL);
    sfRenderWindow_setFramerateLimit(window, fps);
    return (window);
}

t_rpg redefine_window(t_rpg game)
{
    if (game.full) {
        sfRenderWindow_close(game.win);
        sfRenderWindow_destroy(game.win);
        game.win = window_create("MY_DEFENDER", sfFalse, 60);
    } else {
        sfRenderWindow_close(game.win);
        sfRenderWindow_destroy(game.win);
        game.win = window_create("MY_DEFENDER", sfTrue, 60);
    }
    game.full = (game.full ? sfFalse : sfTrue);
    return (game);
}