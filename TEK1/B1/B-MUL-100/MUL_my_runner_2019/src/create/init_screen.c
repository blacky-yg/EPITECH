/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** init_screen
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

int init_screen(screen_t *screen)
{
    sfVideoMode video_mode = {1366, 768, 32};

    screen->window = sfRenderWindow_create(video_mode, "RUN~RUN",
                                    sfClose | sfTitlebar, NULL);
    if (!screen->window)
        return (84);
    return (0);
}