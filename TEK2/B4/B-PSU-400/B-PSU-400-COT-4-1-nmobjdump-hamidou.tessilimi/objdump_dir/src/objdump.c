/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** objdump
*/

#include "../include/objdump.h"

int objdump(gen_t *gen)
{
    char *str = NULL;
    if (!(gen->data = init_struct(gen)) || gen->data == MAP_FAILED)
        return (ONE);
    gen->elf = (Elf64_Ehdr *)gen->data;
    if (gen->elf->e_ident[EI_CLASS] == ELFCLASS64)
        if (obj_64(gen))
            return (ONE);
    if (munmap(gen->data, gen->size) == -1) {
        display_error(gen->_arg_name, MUNMAP);
        return (ONE);
    }
    return (ZERO);
}