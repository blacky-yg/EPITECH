/*
** EPITECH PROJECT, 2021
** nm
** File description:
** mmap
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>

int main(int ac, char **av)
{
    int fd;
    void *buf;
    struct stat s;
    Elf64_Ehdr *elf;

    fd = open(av[1], O_RDONLY);
    if (fd != -1) {
        fstat(fd, &s);
        buf = mmap(NULL, s.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
        if (buf != (void *)-1) {
            elf = buf;
            printf("av[1] = %s\nbuf = %s -- %p\n", av[1], (char *)buf, buf);
            printf("Section = %ld\t, nb = %d\n", elf->e_shoff, elf->e_shnum);
            munmap(buf, s.st_size);
        } else
            perror("mmap");
    }
    close(fd);
}