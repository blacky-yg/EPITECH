/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** calloc
*/

#include "../include/malloc.h"

void *calloc(size_t nmemb, size_t size)
{
    void *addr = NULL;
    if ((addr = malloc(nmemb * size)) == NULL)
        return (NULL);
    else
        memset(addr, 0, nmemb * size - 1);
    return (addr);
}