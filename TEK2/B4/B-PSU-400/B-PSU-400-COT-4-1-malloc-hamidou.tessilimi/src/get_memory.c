/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** get_memory
*/

#include "../include/malloc.h"

void *get_mem(size_t size)
{
    mem_t *cur_m = block.b_head;
    mem_t *next_m = NULL;
    for (; cur_m; cur_m = cur_m->m_next)
        if (cur_m->m_is_free && cur_m->m_size > (size + MEM_SIZE))
            return (get_cur_mem(cur_m, &next_m, size));
    return (NULL);
}

void *get_cur_mem(mem_t *cur_m, mem_t **next_m, size_t size)
{
    size_t new_size = cur_m->m_size - (size + MEM_SIZE);
    *next_m = cur_m->m_next;
    init_mem(cur_m, size);
    init_next_mem(cur_m, new_size);
    cur_m->m_next->m_next = *next_m;
    return (cur_m->block);
}

void *get_supp_mem(size_t size)
{
    mem_t *cur_m = block.b_head;
    mem_t *next_m;
    int nb_page = 0;

    for (; cur_m != NULL && cur_m->m_next != NULL; cur_m = cur_m->m_next);
    if (cur_m == NULL)
        return (init_first_time(size, nb_page));
    if (((size_t)cur_m->block + cur_m->m_size + MEM_SIZE + size)
                    < (size_t)sbrk(0))
        return (add_to_page(&next_m, cur_m, size));
    else
        return (get_new_page(&next_m, cur_m, size, nb_page));
}