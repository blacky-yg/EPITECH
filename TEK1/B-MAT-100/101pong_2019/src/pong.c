/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** pong
*/

#include "../include/my.h"
#include "../include/pong.h"

int pong(vect_coord u, vect_coord v, unsigned int n)
{
    vect_coord vect_velo = {v.x - u.x, v.y - u.y, v.z - u.z};
    vect_coord vect_ball_end;

    display_vect_velo(vect_velo);
    vect_ball_end.x = v.x + (n * vect_velo.x);
    vect_ball_end.y = v.y + (n * vect_velo.y);
    vect_ball_end.z = v.z + (n * vect_velo.z);
    display_vect_ball_end(vect_ball_end, n);
    if (vect_velo.z != 0 && (-v.z / vect_velo.z) >= 0 && v.x != 0) {
        display_incidence_angle(vect_velo);
        return (0);
    } else {
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    return (84);
}