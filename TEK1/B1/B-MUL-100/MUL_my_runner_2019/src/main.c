/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** main
*/

#include "../include/my.h"
#include "../include/my_runner.h"

int main(int ac, char *av[])
{
    game_t game;

    check_bad_stat(ac, av);
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        usage();
    else {
        create_ressources(&game);
        game.scene = 1;
        while (sfRenderWindow_isOpen(game.screen.window)) {
            while (sfRenderWindow_pollEvent(game.screen.window,
                    &game.screen.event))
                analyse_events(&game);
            sfRenderWindow_clear(game.screen.window, sfBlack);
            draw_ressources(&game);
            sfRenderWindow_display(game.screen.window);
        }
        destroy_all(&game);
    }
    return (0);
}