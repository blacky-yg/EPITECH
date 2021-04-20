/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex01
*/

#ifndef EX01_HPP
#define EX01_HPP

#include <iostream>
#include <string.h>

template<typename T>
int compare(T const &first, T const &second)
{
    if (first == second)
        return (0);
    else if (first < second)
        return (-1);
    return (1);
}

template<>
int compare<const char *>(const char * const &first, const char * const &second)
{
    if (!strcmp(first, second))
        return (0);
    else if (strcmp(first, second) < 0)
        return (-1);
    else if (strcmp(first, second) > 0)
        return (1);
    return (1);
}

#endif /* !EX01_HPP */