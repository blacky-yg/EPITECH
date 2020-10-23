/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** matchstick
*/

#include <unistd.h>

void print_updated_board_game(int line, int nb_matches)
{
    char **array = malloc(sizeof(char *) * 4);

    for (int i = 0; i < 4; i++)
        array[i] = malloc(sizeof(char) * 9);
    
}