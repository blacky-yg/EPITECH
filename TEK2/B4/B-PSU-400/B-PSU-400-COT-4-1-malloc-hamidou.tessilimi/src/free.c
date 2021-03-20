/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** free
*/

#include "../include/malloc.h"

void free_block(void *ptr)
{
    mem_t *cur_m = block.b_head;
    mem_t *prev_m = NULL;

    for (; cur_m && cur_m->block != ptr; cur_m = cur_m->m_next)
        prev_m = cur_m;
    if (cur_m != NULL)
        cur_m->m_is_free = true;
    if (cur_m != NULL && cur_m->m_next != NULL && cur_m->m_next->m_is_free) {
        cur_m->m_size = cur_m->m_next->m_size + MEM_SIZE;
        cur_m->m_next = cur_m->m_next->m_next;
    }
    if (cur_m != NULL && prev_m != NULL && prev_m->m_is_free) {
        prev_m->m_size = cur_m->m_size + MEM_SIZE;
        prev_m->m_next = cur_m->m_next;
    }
}

void free(void *ptr)
{
    if (ptr == NULL)
        return;
    free_block(ptr);
}