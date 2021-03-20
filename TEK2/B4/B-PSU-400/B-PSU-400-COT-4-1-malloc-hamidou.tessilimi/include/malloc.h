/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#ifndef MALLOC_H
#define MALLOC_H

#include <stddef.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

#define ERROR ((void *)-1)
#define MEM_SIZE (sizeof(mem_t))
#define CAST(s) ((void *)s)

typedef struct mem_s {
    bool m_is_free;
    size_t m_size;
    void *block;
    struct mem_s *m_next;
} mem_t;

typedef struct block_s {
    mem_t *b_head;
    size_t b_page;
} block_t;

static block_t block = {NULL, 0};

// MALLOC
void *get_mem(size_t size);
void *get_cur_mem(mem_t *cur_m, mem_t **next_m, size_t size);
void *get_supp_mem(size_t size);

void init_mem(mem_t *cur_m, size_t size);
void *init_first_time(size_t size, size_t nb_page);
void init_next_mem(mem_t *cur_m, size_t new_size);

void *get_new_page(mem_t **next_m, mem_t *cur_m, size_t size, int nb_page);
void *add_to_page(mem_t **next_m, mem_t *cur_m, size_t size);

void *malloc(size_t size);

// CALLOC
void *calloc(size_t nmemb, size_t size);

// FREE
void free(void *ptr);

// REALLOC
void *realloc(void *ptr, size_t size);

// REALLOCARRAY
void *reallocarray(void *ptr, size_t nmemb, size_t size);

#endif /* !MALLOC_H */