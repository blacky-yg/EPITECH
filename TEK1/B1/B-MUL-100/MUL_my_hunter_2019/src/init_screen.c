/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** init_screen
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int init_screen(screen_t *screen)
{
    sfVideoMode video_mode = {800, 700, 32};

    screen->window = sfRenderWindow_create(video_mode, "HUNTER",
                                    sfDefaultStyle, NULL);
    if (!screen->window)
        return (84);
    return (0);
}