/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** header of 101pong
*/

#ifndef PONG_H
#define PONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

typedef struct vector_coordinates
{
    float x;
    float y;
    float z;
}   vect_coord;

int usage(char **av);
int display_vect_velo(vect_coord vect_velo);
int display_vect_ball_end(vect_coord vect_ball_end, unsigned int n);
int display_incidence_angle(vect_coord vect_velo);
int	check_argument(char *av);
int pong(vect_coord u, vect_coord v, unsigned int n);

#endif /* PONG_H */