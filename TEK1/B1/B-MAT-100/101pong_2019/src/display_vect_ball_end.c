/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** display_vect_ball_end
*/

#include "../include/my.h"
#include "../include/pong.h"

int display_vect_ball_end(vect_coord vect_ball_end, unsigned int n)
{
    printf("At time t + %d, ", n);
    printf("ball coordinates will be:\n(%.2f, %.2f, %.2f)\n", vect_ball_end.x,
           vect_ball_end.y, vect_ball_end.z);
    return (0);
}