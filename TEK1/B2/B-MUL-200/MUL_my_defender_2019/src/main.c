/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** main
*/

#include "../include/defender.h"

int main(int ac, char *av[])
{
    game_t game;

    if (ac > 2)
        return (84);
    else if (ac == 2 && (!my_strcmp(av[1], "-h") || !my_strcmp(av[1], "-help")))
        usage();
    else {
        create_resources(&game);
        while (sfRenderWindow_isOpen(game.screen.window)) {
            while (sfRenderWindow_pollEvent(game.screen.window,
                    &game.screen.event))
                analyse_events(&game);
            sfRenderWindow_clear(game.screen.window, sfBlack);
            draw_resources(&game);
            sfRenderWindow_display(game.screen.window);
        } destroy_all(&game);
    }
    return (0);
}