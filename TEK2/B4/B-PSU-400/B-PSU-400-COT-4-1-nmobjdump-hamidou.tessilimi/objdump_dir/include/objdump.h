/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** objdump.h
*/

#ifndef OBJDUMP_H
#define OBJDUMP_H

#include "define.h"
#include "types64.h"

typedef struct gen_s {
    unsigned int size;
    void *data;
    int _arg;
    char *_arg_name;
    char *strtab;
    Elf64_Ehdr *elf;
    Elf64_Shdr *shdr_64;
    Elf64_Sym *sym_64;
} gen_t;

// UTILS
void usage(void);

// MANAGE_ERROR
void *display_error(char *arg_name, char *error);
void *display_warning(char *arg_name, char *error);

// INIT_STRUCT
int get_size(long int nb);
void *init_struct(gen_t *gen);

// CHECK_SECTION_64
int check_file_64(gen_t *gen);
int check_section_64(gen_t *gen, size_t i);
int check_trunc_64(gen_t *gen);

// GET TYPE 64
char is_undefined_64(Elf64_Sym *sym);
char is_data_64(gen_t *gen, Elf64_Sym *sym);
char is_exec_64(gen_t *gen, Elf64_Sym *sym);
char is_init_array_64(gen_t *gen, Elf64_Sym *sym);
char get_type_64(gen_t *gen, Elf64_Sym *sym);

// GET_FLAGS_64
uint32_t get_flags_64(gen_t *gen);

// DISPLAY_64
void display_section_64(gen_t *gen);
void display_flags_64(gen_t *gen);
int display_char(unsigned int j, unsigned int k,
        unsigned char *addr, unsigned char *str);
void dump(gen_t *gen, int i);
void display_arch_64(gen_t *gen);

// OBJ 64
int obj_64(gen_t *gen);

// MAIN FUNCTION
int objdump(gen_t *gen);

#endif /* !OBJDUMP_H */