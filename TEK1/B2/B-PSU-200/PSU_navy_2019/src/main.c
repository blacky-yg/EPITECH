/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main
*/

#include "../include/navy.h"

extern GLOBAL DOALL;

void init_game(GAME *game)
{
    game->map = init_map();
    game->map2 = init_map();
    game->nb_sig = 0;
    DOALL.usr1 = 0;
    DOALL.usr2 = 0;
    game->p1 = false;
    game->p2 = false;
    game->co = false;
}

int start_game(int ac, char **av, GAME *game)
{
    init_game(game);
    if (load_map(av[ac - 1], game))
        return (1);
    if (ac == 2) {
        game->p1 = true;
        co_to_p2(game);
        game->pid = DOALL.pid;
    } else {
        game->p2 = true;
        co_to_p1(game, game->pid = my_getnbr(av[1]));
    }
    if (game->co == false) {
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    GAME game;

    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        usage();
        return (0);
    }
    if (check_arg(ac, av))
        return (84);
    if (start_game(ac, av, &game))
        return (84);
    if (game.co == true) {
        game.status = true;
        if (play_game(&game) != 0)
            return (84);
        free(game.map);
        free(game.map2);
    }
    return (0);
}