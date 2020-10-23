/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** push_swap.h
*/

#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct list_s list_t;
struct list_s
{
    int number;
    struct list_s *next;
};

int is_valid_number(char *av);
int is_ordered(int ac, list_t **list);
int check_av(char *av[]);
void first_swap(list_t **list);
void append(list_t **list, int new_number);
void print_list(list_t *list);
void bubble(list_t *list);
void swap(int *a, int *b);
int get_list_length(list_t *list);
void sa_list(list_t **list);
void sb_list(list_t **l_b);
void sc_list(list_t **l_a, list_t **l_b);

#endif /* _PUSH_SWAP_H */