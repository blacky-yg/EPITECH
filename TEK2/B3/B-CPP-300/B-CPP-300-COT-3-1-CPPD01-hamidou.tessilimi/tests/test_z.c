/*
** EPITECH PROJECT, 2021
** day01
** File description:
** test_is_hexa
*/

#include <criterion/criterion.h>
#include "../ex00/include/z.h"

Test(is_hexa, test_is_hexa)
{
    cr_assert(is_hexa("0x42242112") == 0);
    cr_assert(is_hexa("0x4224211G") == 1);
}