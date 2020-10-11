/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** usage
*/

#include "../include/tetris.h"

void usage(char *av[])
{
    !my_strcmp(av[0], "./tetris") ? my_putstr("Usage: ./tetris [options]\n") :
                        my_putstr("Usage: ./mytetris [options]\n");
    my_putstr("Options:\n");
    my_putstr(" --help               Display this help\n");
    my_putstr(" -L --level={num}     Start Tetris at level num (def: 1)\n");
    my_putstr(" -l --key-left={K}    Move the tetrimino LEFT using the K ");
    my_putstr("key (def: left arrow)\n");
    my_putstr(" -r --key-right={K}   Move the tetrimino RIGHT using the K key");
    my_putstr(" (def: right arrow)\n");
    my_putstr(" -t --key-turn={K}    TURN the tetrimino clockwise 90d using t");
    my_putstr("he K key (def: top arrow)\n");
    my_putstr(" -d --key-drop={K}    DROP the tetrimino using the K key (def:");
    my_putstr(" down arrow)\n");
    my_putstr(" -q --key-quit={K}    QUIT the game using the K key (def: 'q' ");
    my_putstr("key)\n");
    my_putstr(" -p --key-pause={K}   PAUSE/RESTART the game using the K key ");
    my_putstr("(def: space bar)\n");
    my_putstr(" --map-size={row,col} Set the numbers of rows and columns of ");
    my_putstr("the map (def: 20,10)\n");
    my_putstr(" -w --without-next    Hide next tetrimino (def: false)\n");
    my_putstr(" -D --debug           Debug mode (def: false)\n");
}