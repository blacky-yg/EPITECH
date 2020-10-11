/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_sort_int_array
*/

#include "../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                tmp =  array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}