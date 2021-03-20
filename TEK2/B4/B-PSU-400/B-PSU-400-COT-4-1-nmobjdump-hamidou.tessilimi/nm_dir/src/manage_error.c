/*
** EPITECH PROJECT, 2021
** nm
** File description:
** display_error
*/

#include "../include/nm.h"

void *display_error(char *arg_name, char *error)
{
    fprintf(stderr, "nm: '%s': %s\n", arg_name, error);
    return (NULL);
}

void *display_warning(char *arg_name, char *error)
{
    fprintf(stderr, "nm: Warning: '%s' %s\n", arg_name, error);
    return (NULL);
}