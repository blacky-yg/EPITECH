/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include <SFML/Graphics/RenderWindow.h>

int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.height = 800;
    video_mode.width = 600;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My_first_windows", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
