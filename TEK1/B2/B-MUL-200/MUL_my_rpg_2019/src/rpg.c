/*
** EPITECH PROJECT, 2020
** defender game
** File description:
** defender game
*/

#include "../include/game.h"

static t_rpg (*interface[8])(t_rpg, tex_font) = {
    menu, play_game, pause_game, opt_game, help,
    new_game, game_over, game_win
};

static int defender(t_rpg game, tex_font f_t)
{
    game = init_game(game, f_t);
    while (sfRenderWindow_isOpen(game.win)) {
        game.mouse = sfMouse_getPositionRenderWindow(game.win);
        sfRenderWindow_clear(game.win, sfBlack);
        if (game.id >= 0 && game.id <= 7)
            game = interface[game.id](game, f_t);
        else
            break;
        sfRenderWindow_display(game.win);
    }
    destroy_game(game, f_t);
    return (0);
}

static int launch_game(char *name)
{
    tex_font f_t = init_font_tex(f_t);
    t_rpg game;
    game.win = window_create("MY_RPG", sfFalse, 60);

    srand(rand_seed());
    if (!game.win)
        return (84);
    game.usr_name = name;
    defender(game, f_t);
    if (name != NULL)
        free(name);
    return (0);
}

int main(int ac, char **av)
{
    char *name = NULL;

    if (ac > 2) {
        write(2, "bad arguments\ntry -h\n", 21);
        return (84);
    }
    switch (ac) {
        case 1: return (launch_game(name));
        break;
        case 2: if (!my_strcmp(av[1], "-h"))
            return (usage());
        else if (!my_strcmp(av[1], "-d"))
            name = get_name();
        else {
            write(2, "bad options\ntry -h\n", 19);
            return (84);
        }
        break;
    }
    return (launch_game(name));
}
