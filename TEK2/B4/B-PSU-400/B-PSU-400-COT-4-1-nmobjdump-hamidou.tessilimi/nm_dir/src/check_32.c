/*
** EPITECH PROJECT, 2021
** nm
** File description:
** check_section_32
*/

#include "../include/nm.h"

int check_file_32(gen_t *gen)
{
    if ((gen->elf_32->e_type != ET_EXEC && gen->elf_32->e_type != ET_REL
        && gen->elf_32->e_type != ET_DYN)
        || gen->elf_32->e_ident[EI_MAG0] != ELFMAG0
        || gen->elf_32->e_ident[EI_MAG1] != 'E'
        || gen->elf_32->e_ident[EI_MAG2] != 'L'
        || gen->elf_32->e_ident[EI_MAG3] != 'F' ) {
        display_error(gen->_arg_name, BAD_FILE_FORMAT);
        return (ONE);
    }
    return (ZERO);
}

int check_section_32(gen_t *gen, size_t i)
{
    return (gen->shdr_32[i].sh_type != SHT_NOBITS
        && gen->shdr_32[i].sh_flags != SHF_INFO_LINK
        && gen->shdr_32[i].sh_size > 0
        && gen->shdr_32[i].sh_name
        && (gen->shdr_32[i].sh_addr || (!gen->shdr_32[i].sh_addr
            && gen->shdr_32[i].sh_type != SHT_REL
            && gen->shdr_32[i].sh_type != SHT_RELA
            && gen->shdr_32[i].sh_type != SHT_STRTAB
            && gen->shdr_32[i].sh_type != SHT_SYMTAB)));
}

int check_trunc_32(gen_t *gen)
{
    if ((gen->elf_32->e_shnum * gen->elf_32->e_shentsize
            + gen->elf_32->e_shoff) > gen->size)
        return (ONE);
    for (size_t i = 0; i < gen->elf_32->e_shnum; i++)
        if (check_section_32(gen, i))
            if ((gen->shdr_32[i].sh_size
                + gen->shdr_32[i].sh_offset) > gen->size)
                return (ONE);
    return (ZERO);
}