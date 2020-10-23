/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** display_vect_velo
*/

#include "../include/my.h"
#include "../include/pong.h"

int display_vect_velo(vect_coord vect_velo)
{
    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vect_velo.x, vect_velo.y, vect_velo.z);
    return (0);
}