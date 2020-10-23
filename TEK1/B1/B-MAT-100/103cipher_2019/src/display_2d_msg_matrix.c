/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display_2d_msg_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void display_2d_msg_matrix(int *key_matrix, int *msg_matrix,
                            int len_key, int len_msg)
{
    int col;
	int row;
	int result_col_1 = 0;
	int result_col_2 = 0;

	printf("Encrypted message:\n");
    for (col = 0, row = 1; row < len_msg; row += 2, col += 2) {
        result_col_1 = msg_matrix[col] * key_matrix[0] + msg_matrix[row] * key_matrix[2];
        result_col_2 = msg_matrix[col] * key_matrix[1] + msg_matrix[row] * key_matrix[3];
        printf("%d %d", result_col_1, result_col_2);
        if (row < len_msg)
            printf(" ");
    }
	if (col < len_msg) {
		result_col_1 = msg_matrix[col] * key_matrix[0];
		result_col_2 = msg_matrix[col] * key_matrix[1];
		printf("%d %d", result_col_1, result_col_2);
	}
	printf("\n");
}