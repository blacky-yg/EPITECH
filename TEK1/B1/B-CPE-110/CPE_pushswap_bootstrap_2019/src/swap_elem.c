/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** swap_elements
*/

#include "../include/push_swap.h"
#include "../include/my.h"

void swap_elem(int *array, int index1, int index2)
{
    int tmp = 0;

    tmp = *(array + index1);
    *(array + index1) = *(array + index2);
    *(array + index2) = tmp;
}