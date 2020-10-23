/*
** EPITECH PROJECT, 2020
** navy
** File description:
** struct.h
*/

#ifndef _STRUCT_H
#define _STRUCT_H

typedef struct GLOBAL
{
    int pid;
    int usr1;
    int usr2;
} GLOBAL;

GLOBAL DOALL;

typedef struct GAME
{
    bool p1;
    bool p2;
    bool co;
    char *move;
    char **map;
    char **map2;
    pid_t pid;
    int nb_sig;
    bool status;
} GAME;

typedef struct COORD
{
    int row1;
    int col1;
    int row2;
    int col2;
    char to_put;
} COORD;

#endif /* !_STRUCT_H */