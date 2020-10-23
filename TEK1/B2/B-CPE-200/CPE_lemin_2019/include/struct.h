/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct gal
{
    char *name;
    int x;
    int y;
} gal_t;

typedef struct lem_s
{
    int ants;
    gal_t *start;
    gal_t *end;
    gal_t *rooms;
    char **tunnels;
} lem_t;

typedef struct anthill
{
    char *name;
    char **next;
    char *status;
} anthill;

#endif /* !STRUCT_H */
