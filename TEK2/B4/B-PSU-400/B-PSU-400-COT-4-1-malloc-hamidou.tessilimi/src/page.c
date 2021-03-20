/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** page
*/

#include "../include/malloc.h"

void *get_new_page(mem_t **next_m, mem_t *cur_m, size_t size, int nb_page)
{
    void *addr = sbrk(0);
    *next_m = sbrk(getpagesize() * nb_page);
    if (addr == sbrk(0))
        return (NULL);
    (*next_m)->m_size = size;
    (*next_m)->m_is_free = false;
    (*next_m)->m_next = NULL;
    cur_m->m_next = *next_m;
    (*next_m)->block = CAST(*next_m) + MEM_SIZE;
    return ((*next_m)->block);
}

void *add_to_page(mem_t **next_m, mem_t *cur_m, size_t size)
{
    *next_m = CAST((size_t)cur_m + cur_m->m_size + MEM_SIZE);
    (*next_m)->m_size = size;
    (*next_m)->m_is_free = false;
    (*next_m)->m_next = NULL;
    cur_m->m_next = *next_m;
    (*next_m)->block = CAST(*next_m) + MEM_SIZE;
    return ((*next_m)->block);
}