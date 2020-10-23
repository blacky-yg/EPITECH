/*
** EPITECH PROJECT, 2020
** asm
** File description:
** asm.h
*/

#ifndef ASM_H
#define ASM_H

#include "struct.h"
#include "header.h"
#include "my.h"
#include "op.h"

#define MAGIC_NUMBER "\x00\xea\x83\xf3"

//main
void usage(void);
int main(int ac, char *av[]);

//init_struct
void init_struct(asm_t *assembl, int ac, char *av[]);

//clean_str
char *clean_str(char *str);

//check
void check_file(asm_t *assembl);
void parse_file(asm_t *assembl);
int check_ext(char *name);
void check_header(asm_t *assembl, char **lines);

//check_2
char *get_var(char *line, asm_t *assembly);
void check_name(asm_t *assembl, char **lines, int i);
void check_comment(asm_t *assembl, char **lines, int i);

//create_file
void create_cor_file(asm_t *assembl);

#endif /* !ASM_H */