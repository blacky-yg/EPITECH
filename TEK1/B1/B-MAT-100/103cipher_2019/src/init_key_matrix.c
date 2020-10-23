/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** init_key_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

int *init_key_matrix(char *key, int size)
{
    int *key_matrix = malloc(sizeof(int) * size);
    int len = my_strlen(key);

    for (int i = 0; i < len; i++)
        key_matrix[i] = key[i];
    for (; len < size; len++)
        key_matrix[len] = 0;
    return (key_matrix);
}