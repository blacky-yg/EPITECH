/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** test
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "../include/push_swap.h"
#include "../include/my.h"

Test(swap_elem, index1_greater_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 2;
    int index2 = 4;

    swap_elem(array, index1, index2);
    cr_assert_eq(array[index1], 5);
    cr_assert_eq(array[index2], 3);
}

Test(bubble_sort_array, sort_array)
{
    int array[6] = {9, 2, -5, 2, 5, 0};
    int array_sort[6] = {-5, 0, 2, 2, 5, 9};

    bubble_sort_array(array, 6);
    cr_assert_arr_eq(array, array_sort, 0);
}