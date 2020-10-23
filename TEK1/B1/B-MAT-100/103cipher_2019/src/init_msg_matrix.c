/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** init_msg_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

int *init_msg_matrix(char *msg, int size)
{
    int *msg_matrix = malloc(sizeof(int) * size);
    int len = my_strlen(msg);

    for (int i = 0; i < len; i++)
        msg_matrix[i] = msg[i];
    for (; len < size; len++)
        msg_matrix[len] = 0;
    return (msg_matrix);
}