/*
** EPITECH PROJECT, 2021
** nm
** File description:
** display_64
*/

#include "../include/nm.h"

int display_sym_64(gen_t *gen, long int size)
{
    char c;
    Elf64_Sym sym_64;

    for (int i = 0; i < size; i++) {
        sym_64 = gen->sym_64[i];
        if (sym_64.st_info != STT_FILE && sym_64.st_name != 0) {
            c = get_type_64(gen, &sym_64);
            (((c == 'w' || c == 'U') && (unsigned int)sym_64.st_value == 0)
            ? printf("                 ")
            : printf("%016x ", (unsigned int)sym_64.st_value));
            printf("%c ", get_type_64(gen, &sym_64));
            printf("%s\n", &gen->strtab[sym_64.st_name]);
        }
    }
    return (ZERO);
}

int display_arch_64(gen_t *gen)
{
    int find = 1;
    long int size;

    for (int i = 0; i < gen->elf->e_shnum; i++) {
        if (gen->shdr_64[i].sh_type == SHT_SYMTAB) {
            gen->strtab = gen->data +
                gen->shdr_64[gen->shdr_64[i].sh_link].sh_offset;
            gen->sym_64 = (Elf64_Sym *)((char *)gen->elf +
                gen->shdr_64[i].sh_offset);
            size = gen->shdr_64[i].sh_size / gen->shdr_64[i].sh_entsize;
            i = gen->elf->e_shnum;
            find = 0;
        }
    }
    if (find == 0) {
        if (gen->_arg > 2)
            printf("\n%s:\n", gen->_arg_name);
        return (display_sym_64(gen, size));
    }
    return (ONE);
}