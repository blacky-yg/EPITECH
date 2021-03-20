/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** init_memory
*/

#include "../include/malloc.h"

void init_mem(mem_t *cur_m, size_t size)
{
    cur_m->m_is_free = false;
    cur_m->m_size = size;
    cur_m->block = CAST(cur_m) + MEM_SIZE;
    cur_m->m_next = CAST(cur_m) + MEM_SIZE + size;
}

void *init_first_time(size_t size, size_t nb_page)
{
    void *addr = sbrk(0);
    block.b_head = sbrk(getpagesize() * nb_page);
    if (addr == sbrk(0))
        return (NULL);
    block.b_head->m_is_free = false;
    block.b_head->m_size = size;
    block.b_head->block = CAST(block.b_head) + MEM_SIZE;
    block.b_head->m_next = NULL;
    return (block.b_head->block);
}

void init_next_mem(mem_t *cur_m, size_t new_size)
{
    cur_m->m_next->m_is_free = true;
    cur_m->m_next->m_size = new_size;
    cur_m->m_next->block = CAST(cur_m->m_next) + MEM_SIZE;
}