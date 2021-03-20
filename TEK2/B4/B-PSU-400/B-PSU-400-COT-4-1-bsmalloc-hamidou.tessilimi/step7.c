/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** step7
*/

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    void *addr = sbrk(0);
    int *i;

    if (addr == (void *)-1)
        printf("With -1\n");

    printf("BEFORE:\naddr = %p\n\n", addr);

    addr = sbrk(sizeof(int) * 1);

    if (addr == (void *)-1)
        printf("With -1\n");

    if (brk(sbrk(0)) != 0)
        printf("Error");
    i[0] = 4;
    i[1] = 2;

    printf("AFTER:\naddr = %p\n\n", addr);
    printf("Addr i = %p\nValue i[0] = %d\nValue i[1] = %d\n", i, i[0], i[1]);
    return (0);
}