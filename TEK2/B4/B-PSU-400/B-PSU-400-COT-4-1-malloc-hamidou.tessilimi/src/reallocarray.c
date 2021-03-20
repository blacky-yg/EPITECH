/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** reallocarray
*/

#include "../include/malloc.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    void *addr = NULL;
    if (ptr == NULL || (addr = malloc(nmemb * size)) == NULL)
        return (NULL);
    memcpy(addr, ptr, nmemb * size);
    return (addr);
}