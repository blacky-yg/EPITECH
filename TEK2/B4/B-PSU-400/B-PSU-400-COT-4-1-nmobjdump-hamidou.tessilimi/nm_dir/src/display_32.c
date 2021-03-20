/*
** EPITECH PROJECT, 2021
** nm
** File description:
** display_64
*/

#include "../include/nm.h"

int display_sym_32(gen_t *gen, long int size)
{
    char c;
    Elf32_Sym sym_32;

    for (int i = 0; i < size; i++) {
        sym_32 = gen->sym_32[i];
        if (sym_32.st_info != STT_FILE && sym_32.st_name != 0) {
            c = get_type_32(gen, &sym_32);
            (((c == 'w' || c == 'U') && (unsigned int)sym_32.st_value == 0)
            ? printf("                 ")
            : printf("%08x ", (unsigned int)sym_32.st_value));
            printf("%c ", get_type_32(gen, &sym_32));
            printf("%s\n", &gen->strtab[sym_32.st_name]);
        }
    }
    return (ZERO);
}

int display_arch_32(gen_t *gen)
{
    int find = 1;
    long int size;

    for (int i = 0; i < gen->elf_32->e_shnum; i++) {
        if (gen->shdr_32[i].sh_type == SHT_SYMTAB) {
            gen->strtab = gen->data +
                gen->shdr_32[gen->shdr_32[i].sh_link].sh_offset;
            gen->sym_32 = (Elf32_Sym *)((char *)gen->elf_32 +
                gen->shdr_32[i].sh_offset);
            size = gen->shdr_32[i].sh_size / gen->shdr_32[i].sh_entsize;
            i = gen->elf_32->e_shnum;
            find = 0;
        }
    }
    if (find == 0) {
        if (gen->_arg > 2)
            printf("\n%s:\n", gen->_arg_name);
        return (display_sym_32(gen, size));
    }
    return (ONE);
}