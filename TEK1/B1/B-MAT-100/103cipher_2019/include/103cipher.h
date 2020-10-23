/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** 103cipher.c
*/

#ifndef _103CIPHER_H
#define _103CIPHER_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void usage(void);
void crypt_msg(char *av[]);
int *init_key_matrix(char *key, int size);
int *init_msg_matrix(char *msg, int size);
void display_2d_key_matrix(int *key_matrix, int len_key);
void display_3d_key_matrix(int *key_matrix, int len_key);
void display_2d_msg_matrix(int *key_matrix, int *msg_matrix,
                            int len_key, int len_msg);
void display_3d_msg_matrix(int *key_matrix, int *msg_matrix,
                            int len_key, int len_msg);

#endif /* _103CIPHER_H */