/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** get_flags_64
*/

#include "../include/objdump.h"

uint32_t get_flags_64(gen_t *gen)
{
    uint32_t flag = 0;
    int s_flag = 0;
    if (gen->elf->e_type == ET_REL)
        flag |= HAS_RELOC;
    if (gen->elf->e_type == ET_EXEC)
        flag |= EXEC_P;
    for (int i = 0; i < gen->elf->e_shnum; i++) {
        if (gen->shdr_64[i].sh_type != SHT_SYMTAB ||
            gen->shdr_64[i].sh_type != SHT_DYNAMIC)
            s_flag = 1;
    }
    if (s_flag)
        flag |= HAS_SYMS;
    if (gen->elf->e_type == ET_DYN)
        flag |= DYNAMIC;
    if (gen->elf->e_phnum != 0)
        flag |= D_PAGED;
    return (flag);
}