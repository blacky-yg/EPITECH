/*
** EPITECH PROJECT, 2021
** nm
** File description:
** get_type_64
*/

#include "../include/nm.h"

char is_init_array_64(gen_t *gen, Elf64_Sym *sym)
{
    if (gen->shdr_64[sym->st_shndx].sh_flags & SHF_WRITE
        && gen->shdr_64[sym->st_shndx].sh_flags & SHF_ALLOC
        && (ELF64_ST_TYPE(sym->st_info) == STT_OBJECT
        || ELF64_ST_TYPE(sym->st_info) == STT_NOTYPE))
        IS_EXEC_64(sym->st_info);
    return ('?');
}

char is_data_64(gen_t *gen, Elf64_Sym *sym)
{
    if (gen->shdr_64[sym->st_shndx].sh_type == SHT_DYNAMIC
        || ((gen->shdr_64[sym->st_shndx].sh_type == SHT_PROGBITS)
        && (gen->shdr_64[sym->st_shndx].sh_flags & SHF_ALLOC))) {
        if (gen->shdr_64[sym->st_shndx].sh_flags & SHF_WRITE)
            IS_DATA_WRITE_64(sym->st_info);
        else
            IS_DATA_64(sym->st_info);
    }
    return (1);
}

char is_undefined_64(Elf64_Sym *sym)
{
    if (sym->st_shndx == SHN_UNDEF)
        IS_UNDEFINED_64(sym->st_info);
    if (sym->st_shndx == SHN_COMMON)
        return ('C');
    return (1);
}

char is_exec_64(gen_t *gen, Elf64_Sym *sym)
{
    if (ELF64_ST_TYPE(sym->st_info) == STT_FUNC
        && gen->shdr_64[sym->st_shndx].sh_type == SHT_PROGBITS
        && gen->shdr_64[sym->st_shndx].sh_flags & SHF_EXECINSTR
        && gen->shdr_64[sym->st_shndx].sh_flags & SHF_ALLOC)
        IS_EXEC_64(sym->st_info);
    return (1);
}

char get_type_64(gen_t *gen, Elf64_Sym *sym)
{
    char c;
    if ((c = is_undefined_64(sym)) != 1)
        return (c);
    if (sym->st_shndx == SHN_ABS)
        return ('A');
    if (ELF64_ST_BIND(sym->st_info) == STB_WEAK
            && ELF64_ST_TYPE(sym->st_info) == STT_OBJECT)
        return ('V');
    if (gen->shdr_64[sym->st_shndx].sh_type == SHT_NOBITS)
        IS_BIN_64(sym->st_info);
    if ((c = is_exec_64(gen, sym)) != 1)
        return (c);
    if ((c = is_data_64(gen, sym)) != 1)
        return (c);
    c = is_init_array_64(gen, sym);
    return (c);
}