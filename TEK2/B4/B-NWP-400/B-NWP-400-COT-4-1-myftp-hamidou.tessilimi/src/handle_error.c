/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** handle_error
*/

#include "../include/myftp.h"

int display_error(char *error_msg)
{
    fprintf(stderr, "%s.\n", error_msg);
    return (84);
}

void *display_ptr_error(char *error_msg)
{
    fprintf(stderr, "%s.\n", error_msg);
    return (NULL);
}