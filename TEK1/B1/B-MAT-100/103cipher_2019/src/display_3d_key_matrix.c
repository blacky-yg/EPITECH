/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display_3d_key_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void display_3d_key_matrix(int *key_matrix, int len_key)
{
    printf("Key matrix:\n");
    if (len_key == 5) {
        printf("%d\t%d\t%d\n", key_matrix[0], key_matrix[1], key_matrix[2]);
        printf("%d\t%d\t0\n", key_matrix[3], key_matrix[4]);
        printf("0\t0\tO\n\n");
    }
    if (len_key == 6) {
        printf("%d\t%d\t%d\n", key_matrix[0], key_matrix[1], key_matrix[2]);
        printf("%d\t%d\t%d\n", key_matrix[3], key_matrix[4], key_matrix[5]);
        printf("0\t0\tO\n\n");
    }
    if (len_key == 7) {
        printf("%d\t%d\t%d\n", key_matrix[0], key_matrix[1], key_matrix[2]);
        printf("%d\t%d\t%d\n", key_matrix[3], key_matrix[4], key_matrix[5]);
        printf("%d\t0\tO\n\n", key_matrix[6]);
    }
    if (len_key == 8) {
        printf("%d\t%d\t%d\n", key_matrix[0], key_matrix[1], key_matrix[2]);
        printf("%d\t%d\t%d\n", key_matrix[3], key_matrix[4], key_matrix[5]);
        printf("%d\t%d\tO\n\n", key_matrix[6], key_matrix[7]);
    }
    if (len_key == 9) {
        printf("%d\t%d\t%d\n", key_matrix[0], key_matrix[1], key_matrix[2]);
        printf("%d\t%d\t%d\n", key_matrix[3], key_matrix[4], key_matrix[5]);
        printf("%d\t%d\t%d\n\n", key_matrix[6], key_matrix[7], key_matrix[8]);
    }
}