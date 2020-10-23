/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** crypt_msg
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void crypt_msg(char *av[])
{
    int *key_matrix = NULL;
    int *msg_matrix = NULL;
    int len_msg = my_strlen(av[1]);
    int len_key = my_strlen(av[2]);

    if (len_key <= 4) {
        key_matrix = init_key_matrix(av[2], len_key);
        display_2d_key_matrix(key_matrix, len_key);
        msg_matrix = init_msg_matrix(av[1], len_msg);
        display_2d_msg_matrix(key_matrix, msg_matrix, len_key, len_msg);
    }
    if (len_key > 4 && len_key <= 9) {
        key_matrix = init_key_matrix(av[2], len_key);
        display_3d_key_matrix(key_matrix, len_key);
        msg_matrix = init_msg_matrix(av[1], len_msg);
        display_3d_msg_matrix(key_matrix, msg_matrix, len_key, len_msg);
    }
    free(key_matrix);
    free(msg_matrix);
}