/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** display_error
*/

#include "../include/objdump.h"

void *display_error(char *arg_name, char *error)
{
    fprintf(stderr, "objdump: '%s': %s\n", arg_name, error);
    return (NULL);
}

void *display_warning(char *arg_name, char *error)
{
    fprintf(stderr, "objdump: Warning: '%s' %s\n", arg_name, error);
    return (NULL);
}