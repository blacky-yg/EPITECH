/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** init_screen
*/

#include "../../include/defender.h"

int init_screen(screen_t *screen)
{
    sfVideoMode video_mode = {1366, 768, 32};

    screen->window = sfRenderWindow_create(video_mode, "Town Defender",
                                    sfClose | sfTitlebar | sfResize, NULL);
    if (!screen->window)
        return (84);
    sfRenderWindow_setFramerateLimit(screen->window, 60);
    return (0);
}