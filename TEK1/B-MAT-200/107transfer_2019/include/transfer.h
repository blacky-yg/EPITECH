/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** transfer.h
*/

#ifndef _TRANSFER_H_
#define _TRANSFER_H_

#include <unistd.h>
#include <stdio.h>

void usage();
void my_putstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int is_digit(char c);
int is_not_digit(char c);
double get_double(char *str);
int check_av(int ac, char *av[]);
int transfer(int ac, char *av[]);

#endif /* !_TRANSFER_H_ */