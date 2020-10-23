/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display_key_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void display_2d_key_matrix(int *key_matrix, int len_key)
{
    printf("Key matrix:\n");
    if (len_key == 1) {
        printf("%d\t0\n", key_matrix[0]);
        printf("0\t0\n\n");
    }
    if (len_key == 2) {
        printf("%d\t%d\n", key_matrix[0], key_matrix[1]);
        printf("0\t0\n\n");
    }
    if (len_key == 3) {
        printf("%d\t%d\n", key_matrix[0], key_matrix[1]);
        printf("%d\t0\n\n", key_matrix[2]);
    }
    if (len_key == 4) {
        printf("%d\t%d\n", key_matrix[0], key_matrix[1]);
        printf("%d\t%d\n\n", key_matrix[2], key_matrix[3]);
    }
}