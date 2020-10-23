/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player2
*/

#include "../include/navy.h"

extern GLOBAL DOALL;

int receive_attack(GAME *game)
{
    struct timespec tim;
    struct timespec tim2;

    tim.tv_sec = 0;
    tim.tv_nsec = 500;
    DOALL.usr1 = 0;
    DOALL.usr2 = 0;
    while (DOALL.usr2 == 0) {
        reception();
        if (kill(game->pid, SIGUSR2) == -1)
            return (84);
        nanosleep(&tim , &tim2);
    } return (0);
}

int send_it_hit(int hit, int sig, GAME *game)
{
    struct timespec tim;
    struct timespec tim2;

    tim.tv_sec = 0;
    tim.tv_nsec = 500;
    DOALL.usr1 = 0;
    DOALL.usr2 = 0;
    for (int i = 1; i <= hit; i++) {
        if (kill(game->pid, sig) == -1)
            return (84);
        reception();
        nanosleep(&tim , &tim2);
    }
    if (kill(game->pid, SIGUSR1) == -1)
        return (84);
    DOALL.usr1 = 0;
    DOALL.usr2 = 0;
    return (0);
}

int hit_me(GAME *game, int nb)
{
    int row = 1;
    int col = 0;

    if (nb > 8) {
        col = nb;
        for (; col > 8; row++, col -= 8);
    } else {
        row = 1;
        col = nb;
    }
    if (game->map[row][col] != '.' && game->map[row][col] != 'x'
            && game->map[row][col] != 'o')
        return (TOUCHED);
    return (MISSED);
}

char *translate_sig(int nb)
{
    int row = 1;
    int col = 0;
    char *where = malloc(sizeof(char *) * 2);

    if (nb > 8) {
        col = nb;
        for (; col > 8; row++, col -= 8);
    } else {
        row = 1;
        col = nb;
    }
    where[0] = col + 64;
    where[1] = row + 48;
    return (where);
}