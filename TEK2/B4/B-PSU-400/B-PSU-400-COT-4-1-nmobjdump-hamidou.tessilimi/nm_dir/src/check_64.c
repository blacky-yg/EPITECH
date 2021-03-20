/*
** EPITECH PROJECT, 2021
** nm
** File description:
** check_section_64
*/

#include "../include/nm.h"

int check_file_64(gen_t *gen)
{
    if ((gen->elf->e_type != ET_EXEC && gen->elf->e_type != ET_REL
        && gen->elf->e_type != ET_DYN) || gen->elf->e_ident[EI_MAG0] != ELFMAG0
        || gen->elf->e_ident[EI_MAG1] != 'E'
        || gen->elf->e_ident[EI_MAG2] != 'L'
        || gen->elf->e_ident[EI_MAG3] != 'F' ) {
        display_error(gen->_arg_name, BAD_FILE_FORMAT);
        return (ONE);
    }
    return (ZERO);
}

int check_section_64(gen_t *gen, size_t i)
{
    return (gen->shdr_64[i].sh_type != SHT_NOBITS
        && gen->shdr_64[i].sh_name
        && gen->shdr_64[i].sh_size > 0
        && gen->shdr_64[i].sh_flags != SHF_INFO_LINK
        && (gen->shdr_64[i].sh_addr || (!gen->shdr_64[i].sh_addr
            && gen->shdr_64[i].sh_type != SHT_STRTAB
            && gen->shdr_64[i].sh_type != SHT_RELA
            && gen->shdr_64[i].sh_type != SHT_REL
            && gen->shdr_64[i].sh_type != SHT_SYMTAB)));
}

int check_trunc_64(gen_t *gen)
{
    if ((gen->elf->e_shnum * gen->elf->e_shentsize
            + gen->elf->e_shoff) > gen->size)
        return (ONE);
    for (size_t i = 0; i < gen->elf->e_shnum; i++)
        if (check_section_64(gen, i))
            if ((gen->shdr_64[i].sh_size
                + gen->shdr_64[i].sh_offset) > gen->size)
                return (ONE);
    return (ZERO);
}