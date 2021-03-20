/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** display_64
*/

#include "../include/objdump.h"

void display_section_64(gen_t *gen)
{
    for (int i = 0; i < gen->elf->e_shnum; i++)
        if (check_section_64(gen, i))
            dump(gen, i);
}

void display_flags_64(gen_t *gen)
{
    int flag = 0;
    int s_flag = 0;
    if (gen->elf->e_type == ET_REL)
        flag += printf("HAS_RELOC");
    if (gen->elf->e_type == ET_EXEC)
        flag += printf((flag) ? ", EXEC_P": "EXEC_P");
    for (int i = 0; i < gen->elf->e_shnum; i++)
        if (gen->shdr_64[i].sh_type != SHT_SYMTAB
            || gen->shdr_64[i].sh_type != SHT_DYNAMIC)
            s_flag = 1;
    if (s_flag)
        flag += printf((flag) ? ", HAS_SYMS": "HAS_SYMS");
    if (gen->elf->e_type == ET_DYN)
        flag += printf((flag) ? ", DYNAMIC": "DYNAMIC");
    if (gen->elf->e_phnum != 0)
        flag += printf((flag) ? ", D_PAGED": "D_PAGED");
    printf("\n");
}

int display_char(unsigned int j, unsigned int k,
                unsigned char *addr, unsigned char *str)
{
    int tmp = j;
    for (; tmp % 16 != 0; tmp++)
        ((tmp % 4) == 0 && tmp % 16 != 0)
        ? printf("   ") : printf("  ");
    printf("  ");
    for (; k < j; k++)
        (isprint(addr[k])) ? printf("%c", str[k]) : printf(".");
    for (; k % 16 != 0; k++)
        printf(" ");
    k = j;
    printf("\n");
    return (k);
}

void dump(gen_t *gen, int i)
{
    unsigned char *str;
    unsigned int k = 0;
    int addr = gen->shdr_64->sh_addr;
    printf("Contents of section %s:\n", &gen->strtab[gen->shdr_64[i].sh_name]);
    str = (unsigned char *)((char *)gen->elf + gen->shdr_64[i].sh_offset);
    for (unsigned int j = 0; j < gen->shdr_64[i].sh_size;) {
        if (j % 16 == 0)
            printf(" %0*x ", get_size((long int)(gen->shdr_64[i].sh_addr
                    + gen->shdr_64[i].sh_size)), addr);
        printf("%02x", str[j++]);
        if (j % 4 == 0 && j % 16 != 0 && j < gen->shdr_64[i].sh_size)
            printf(" ");
        if (j % 16 == 0)
            addr += 16;
        if (j % 16 == 0 || j >= gen->shdr_64[i].sh_size)
            k = display_char(j, k, str, (char *)str);
    }
}

void display_arch_64(gen_t *gen)
{
    printf("\n%s:%5cfile format %s\n", gen->_arg_name, ' ', "elf64-x86-64");
    printf("architecture: i386:x86-64, flags 0x%.8x:\n", get_flags_64(gen));
    display_flags_64(gen);
    printf("start address 0x%016x\n\n", (int)gen->elf->e_entry);
    display_section_64(gen);
}