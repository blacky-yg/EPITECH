/*
** EPITECH PROJECT, 2021
** nm
** File description:
** nm
*/

#ifndef NM_H
#define NM_H

#include "define.h"
#include "types64.h"
#include "types32.h"

typedef struct gen_s {
    unsigned int size;
    void *data;
    int _arg;
    char *_arg_name;
    char *strtab;
    Elf64_Ehdr *elf;
    Elf64_Shdr *shdr_64;
    Elf64_Sym *sym_64;
    Elf32_Ehdr *elf_32;
    Elf32_Shdr *shdr_32;
    Elf32_Sym *sym_32;
} gen_t;

// UTILS
void usage(void);

// MANAGE_ERROR
void *display_error(char *arg_name, char *error);
void *display_warning(char *arg_name, char *error);

// INIT_STRCUT
void *init_struct(gen_t *gen);


// 64


// CHECK_64
int check_file_64(gen_t *gen);
int check_section_64(gen_t *gen, size_t i);
int check_trunc_64(gen_t *gen);

// GET TYPE 64
char is_init_array_64(gen_t *gen, Elf64_Sym *sym);
char is_data_64(gen_t *gen, Elf64_Sym *sym);
char is_undefined_64(Elf64_Sym *sym);
char is_exec_64(gen_t *gen, Elf64_Sym *sym);
char get_type_64(gen_t *gen, Elf64_Sym *sym);

// DISPLAY_64
int display_sym_64(gen_t *gen, long int size);
int display_arch_64(gen_t *gen);

// COMPUTE 64
int compute_64(gen_t *gen);


// 32


// CHECK_32
int check_file_32(gen_t *gen);
int check_section_32(gen_t *gen, size_t i);
int check_trunc_32(gen_t *gen);

// GET TYPE 32
char is_init_array_32(gen_t *gen, Elf32_Sym *sym);
char is_data_32(gen_t *gen, Elf32_Sym *sym);
char is_undefined_32(Elf32_Sym *sym);
char is_exec_32(gen_t *gen, Elf32_Sym *sym);
char get_type_32(gen_t *gen, Elf32_Sym *sym);

// DISPLAY_32
int display_sym_32(gen_t *gen, long int size);
int display_arch_32(gen_t *gen);

// COMPUTE 32
int compute_32(gen_t *gen);

// MAIN FUNCTION
int nm(gen_t *gen);

#endif /* !NM_H */