/*
** EPITECH PROJECT, 2021
** nm
** File description:
** get_type_32
*/

#include "../include/nm.h"

char is_init_array_32(gen_t *gen, Elf32_Sym *sym)
{
    if (gen->shdr_32[sym->st_shndx].sh_flags & SHF_WRITE
        && gen->shdr_32[sym->st_shndx].sh_flags & SHF_ALLOC
        && (ELF32_ST_TYPE(sym->st_info) == STT_OBJECT
        || ELF32_ST_TYPE(sym->st_info) == STT_NOTYPE))
        IS_EXEC_32(sym->st_info);
    return ('?');
}

char is_data_32(gen_t *gen, Elf32_Sym *sym)
{
    if (gen->shdr_32[sym->st_shndx].sh_type == SHT_DYNAMIC
        || ((gen->shdr_32[sym->st_shndx].sh_type == SHT_PROGBITS)
        && (gen->shdr_32[sym->st_shndx].sh_flags & SHF_ALLOC))) {
        if (gen->shdr_32[sym->st_shndx].sh_flags & SHF_WRITE)
            IS_DATA_WRITE_32(sym->st_info);
        else
            IS_DATA_32(sym->st_info);
    }
    return (ONE);
}

char is_undefined_32(Elf32_Sym *sym)
{
    if (sym->st_shndx == SHN_UNDEF)
        IS_UNDEFINED_32(sym->st_info);
    if (sym->st_shndx == SHN_COMMON)
        return ('C');
    return (ONE);
}

char is_exec_32(gen_t *gen, Elf32_Sym *sym)
{
    if (ELF32_ST_TYPE(sym->st_info) == STT_FUNC
        && gen->shdr_32[sym->st_shndx].sh_type == SHT_PROGBITS
        && gen->shdr_32[sym->st_shndx].sh_flags & SHF_EXECINSTR
        && gen->shdr_32[sym->st_shndx].sh_flags & SHF_ALLOC)
        IS_EXEC_32(sym->st_info);
    return (ONE);
}

char get_type_32(gen_t *gen, Elf32_Sym *sym)
{
    char c;
    if ((c = is_undefined_32(sym)) != 1)
        return (c);
    if (sym->st_shndx == SHN_ABS)
        return ('A');
    if (ELF32_ST_BIND(sym->st_info) == STB_WEAK
            && ELF32_ST_TYPE(sym->st_info) == STT_OBJECT)
        return ('V');
    if (gen->shdr_32[sym->st_shndx].sh_type == SHT_NOBITS)
        IS_BIN_32(sym->st_info);
    if ((c = is_exec_32(gen, sym)) != 1)
        return (c);
    if ((c = is_data_32(gen, sym)) != 1)
        return (c);
    c = is_init_array_32(gen, sym);
    return (c);
}