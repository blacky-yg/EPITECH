/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** display_incidence_angle
*/

#include "../include/my.h"
#include "../include/pong.h"

int display_incidence_angle(vect_coord vect_velo)
{
    float norm_vect = 0;
    float angle_degree = 0;
    float angle_radian = 0;

    norm_vect = sqrt(pow(vect_velo.x, 2) + pow(vect_velo.y, 2)
                     + pow(vect_velo.z, 2));
    angle_radian = acos(vect_velo.z / norm_vect);
    angle_degree = 180 * (angle_radian - (M_PI/2)) / M_PI;
    angle_degree = fabs(angle_degree);
    printf("The incidence angle is :\n");
    printf("%.2f degrees\n", angle_degree);
    return (0);
}