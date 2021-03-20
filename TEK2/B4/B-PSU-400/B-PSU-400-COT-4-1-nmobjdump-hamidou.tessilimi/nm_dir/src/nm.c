/*
** EPITECH PROJECT, 2021
** nm
** File description:
** nm
*/

#include "../include/nm.h"

int nm(gen_t *gen)
{
    char *str = NULL;
    if (!(gen->data = init_struct(gen)) || gen->data == MAP_FAILED)
        return (1);
    gen->elf = (Elf64_Ehdr *)gen->data;
    if (gen->elf->e_ident[EI_CLASS] == ELFCLASS64)
        if (compute_64(gen))
            return (ONE);
    else if (gen->elf->e_ident[EI_CLASS] == ELFCLASS32)
        if (compute_32(gen))
            return (ONE);
    if (munmap(gen->data, gen->size) == -1) {
        display_error(gen->_arg_name, MUNMAP);
        return (ONE);
    }
    return (ZERO);
}