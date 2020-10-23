/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** display_3d_msg_matrix
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void display_3d_msg_matrix(int *key_matrix, int *msg_matrix,
                            int len_key, int len_msg)
{
    int col = 0;
    int row = 1;
	int result_col_1 = 0;
	int result_col_2 = 0;
    int result_col_3 = 0;

	printf("Encrypted message:\n");
    for (; row < len_msg; row += 3, col += 3) {
        result_col_1 = msg_matrix[col] * key_matrix[0] + msg_matrix[row] * key_matrix[3] + msg_matrix[row+1] * key_matrix[6];
        result_col_2 = msg_matrix[col] * key_matrix[1] + msg_matrix[row] * key_matrix[4] + msg_matrix[row+1] * key_matrix[7];
        result_col_3 = msg_matrix[col] * key_matrix[2] + msg_matrix[row] * key_matrix[5] + msg_matrix[row+1] * key_matrix[8];
    	printf("%d %d %d", result_col_1, result_col_2, result_col_3);
        if (row < len_msg)
            printf(" ");
    }
	if (col < len_msg) {
		result_col_1 = msg_matrix[col] * key_matrix[0];
		result_col_2 = msg_matrix[col] * key_matrix[1];
		result_col_3 = msg_matrix[col] * key_matrix[2];
		printf("%d %d %d", result_col_1, result_col_2, result_col_3);
	}
	printf("\n");
}