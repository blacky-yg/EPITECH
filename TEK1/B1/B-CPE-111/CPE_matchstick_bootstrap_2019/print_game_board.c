/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** matchstick
*/

#include <unistd.h>
#include <stdlib.h>

void print_game_board(void)
{
    char **array = malloc(sizeof(char *) * 6);

    for (int i = 0; i < 6; i++)
        array[i] = malloc(sizeof(char) * 9);
    for (int i = 0; i < 9; i++) {
        array[0][i] = '*';
        array[5][i] = '*';
    }
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 8; j++) { 
            if (j == 4 && i == 1)
                array[i][j] = '|';
            else if (j > 3 && j <= 5 && i == 2) {
                array[i][j] = '|';
                array[i][j+1] = '|';
                array[i][j-1] = '|';
            } else if (j > 3 && j <= 6 && i == 3) {
                array[i][j] = '|';
                array[i][j+1] = '|';
                array[i][j+2] = '|';
                array[i][j-1] = '|';
                array[i][j-2] = '|';
            } else if (j >= 1 && i == 4) {
                for (int k = 1; k <= 7; k++)
                    array[i][k] = '|';
            } else
                array[i][j] = ' ';
        }
    }
    for (int i = 0; i < 6; i++) {
        array[i][0] = '*';
        array[i][8] = '*';
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 9; j++)
            write(1, &array[i][j], 1);
        write(1, "\n", 1);
    }
}