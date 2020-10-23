/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** main
*/

#include "../include/tetris.h"

int main(int ac, char **av)
{
    tetrimino_t *tetriminos = NULL;
    char *left = malloc(sizeof(char) * 6), *right = malloc(sizeof(char) * 6),
    *up = malloc(sizeof(char) * 6), *down = malloc(sizeof(char) * 6);
    const struct option longopts[] = {{"help", 0, 0, 'h'},
{"level", 1, 0, 'L'}, {"key-left", 1, 0, 'l'}, {"key-right", 1, 0, 'r'},
{"key-turn", 1, 0, 't'}, {"key-drop", 1, 0, 'd'}, {"key-quit", 1, 0, 'q'},
{"key-pause", 1, 0, 'p'}, {"map-size", 1, 0, 'm'},
{"without-next", 0, 0, 'w'}, {"debug", 0, 0, 'D'}, {0, 0, 0, 0}};
    left[0] = '\0', right[0] = '\0', up[0] = '\0', down[0] = '\0';
    left = "^EOD", right = "^EOC", up = "^EOA", down = "^EOB";
    tetris_t tetris = {1, left, right, up, down, "q", "p",
    (map_size_t){20, 10}, 1};
    if (ac == 1)
        return (84);
    tetris = handopt(longopts, ac, av, tetris);
    for (int i = 1, nb_mino = 0; i < ac; i++)
        if (my_strcmp(av[i], "--debug") == 0 ||  my_strcmp(av[i], "-D") == 0) {
            tetriminos = my_debug(tetris, &nb_mino);
            game(&tetris);
        }
    return (0);
}
