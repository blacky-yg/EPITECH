/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** main
*/

#include "../include/my.h"
#include "../include/bsq.h"

int main(int ac, char *av[])
{
    int fd = 0;
    bsq_t *bsq = malloc(sizeof(*bsq));

    if (!check_fd_ac(ac, av))
        return (84);
    bsq->filepath = av[1];
    fd = open(bsq->filepath, O_RDONLY);
    bsq = init_bsq(bsq);
    bsq_mission(bsq, fd);
    free(bsq);
    return (0);
}