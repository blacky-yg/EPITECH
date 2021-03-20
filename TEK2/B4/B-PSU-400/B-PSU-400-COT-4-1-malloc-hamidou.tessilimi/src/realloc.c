/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** realloc
*/

#include "../include/malloc.h"

void *realloc(void *ptr, size_t size)
{
    mem_t *cur_m;
    mem_t *tmp;
    void *addr = NULL;

    if (ptr == NULL)
        return (malloc(size));
    if (size <= 0)
        return (NULL);
    tmp = CAST(ptr) - MEM_SIZE;
    cur_m = block.b_head;
    for (; cur_m->block != ptr && cur_m != NULL; cur_m = cur_m->m_next);
    addr = malloc(size);
    if (cur_m != NULL) {
        if (size >= tmp->m_size)
            memcpy(addr, ptr, cur_m->m_size);
        else
            memcpy(addr, ptr, size);
    }
    return (addr);
}