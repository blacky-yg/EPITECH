/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** buble_sort_array
*/

#include "../include/push_swap.h"
#include "../include/my.h"

void bubble_sort_array(int *array, int size)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
                swap_elem(array, j, j + 1);
}