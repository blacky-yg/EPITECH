/*
** EPITECH PROJECT, 2019
** Pointers : my_sort_int_array
** File description:
** a function that sorts an integer array in ascending order
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;
    int temp;

    for (i = 1; i < size; i++) {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
}
