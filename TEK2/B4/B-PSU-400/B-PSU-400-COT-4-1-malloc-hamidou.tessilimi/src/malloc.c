/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../include/malloc.h"

void *malloc(size_t size)
{
    void *mem = sbrk(0);
    if (size <= 0)
        return (NULL);
    mem = sbrk(20);
    mem = get_mem(size);
    if (mem == NULL) {
        mem = get_supp_mem(size);
        return (mem);
    }
    return (mem);
}