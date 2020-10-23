/*
** EPITECH PROJECT, 2019
** test_cat
** File description:
** test_cat
*/

#include <criterion/criterion.h>
int cat_file(char *file);

Test(cat_file, cat_a_file_on_screen)
{
    char file[10];

    file[10] = "Hamidou";
    cr_assert_eq(cat_file(file), 84);
}
