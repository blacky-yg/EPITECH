/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** move
*/

#include "../include/sokoban.h"
#include "../include/my.h"

void move_up(sokoban_t *sokoban)
{
    if (sokoban->map[sokoban->p_pos - sokoban->cols] == ' ' ||
            sokoban->map[sokoban->p_pos - sokoban->cols] == 'P' ||
            sokoban->map[sokoban->p_pos - sokoban->cols] == 'O') {
        sokoban->map[sokoban->p_pos - sokoban->cols] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos -= sokoban->cols;
    } else if (sokoban->map[sokoban->p_pos - sokoban->cols] == 'X' &&
        (sokoban->map[sokoban->p_pos - sokoban->cols - sokoban->cols] == ' ' ||
        sokoban->map[sokoban->p_pos - sokoban->cols - sokoban->cols] == 'O')) {
        sokoban->map[sokoban->p_pos - sokoban->cols - sokoban->cols] = 'X';
        sokoban->map[sokoban->p_pos - sokoban->cols] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos -= sokoban->cols;
    }
}

void move_down(sokoban_t *sokoban)
{
    if (sokoban->map[sokoban->p_pos + sokoban->cols] == ' ' ||
            (sokoban->map[sokoban->p_pos + sokoban->cols] == 'P') ||
            sokoban->map[sokoban->p_pos + sokoban->cols] == 'O') {
        sokoban->map[sokoban->p_pos + sokoban->cols] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos += sokoban->cols;
    } else if (sokoban->map[sokoban->p_pos + sokoban->cols] == 'X' && \
        (sokoban->map[sokoban->p_pos + sokoban->cols + sokoban->cols] == ' ' ||
        sokoban->map[sokoban->p_pos + sokoban->cols + sokoban->cols] == 'O')) {
        sokoban->map[sokoban->p_pos + sokoban->cols + sokoban->cols] = 'X';
        sokoban->map[sokoban->p_pos + sokoban->cols] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos += sokoban->cols;
    }
}

void move_right(sokoban_t *sokoban)
{
    if (sokoban->map[sokoban->p_pos + 1] == ' ' ||
            sokoban->map[sokoban->p_pos + 1] == 'P' ||
            sokoban->map[sokoban->p_pos + 1] == 'O') {
        sokoban->map[sokoban->p_pos + 1] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos++;
    } else if (sokoban->map[sokoban->p_pos + 1] == 'X' &&
            (sokoban->map[sokoban->p_pos + 2] == ' ' ||
            sokoban->map[sokoban->p_pos + 2] == 'O')) {
        sokoban->map[sokoban->p_pos + 2] = 'X';
        sokoban->map[sokoban->p_pos + 1] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos++;
    }
}

void move_left(sokoban_t *sokoban)
{
    if (sokoban->map[sokoban->p_pos - 1] == ' ' ||
            sokoban->map[sokoban->p_pos - 1] == 'P' ||
            sokoban->map[sokoban->p_pos - 1] == 'O') {
        sokoban->map[sokoban->p_pos -1] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos--;
    } else if (sokoban->map[sokoban->p_pos - 1] == 'X' &&
            (sokoban->map[sokoban->p_pos - 2] == ' ' ||
            sokoban->map[sokoban->p_pos - 2] == 'O')) {
        sokoban->map[sokoban->p_pos - 2] = 'X';
        sokoban->map[sokoban->p_pos - 1] = 'P';
        if (sokoban->map_dup[sokoban->p_pos] == 'O')
            sokoban->map[sokoban->p_pos] == 'O';
        else
            sokoban->map[sokoban->p_pos] = ' ';
        sokoban->p_pos--;
    }
}