/*
** EPITECH PROJECT, 2021
** nm
** File description:
** nm
*/

#include <unistd.h>

char *str = "Blacky";

void toto(void)
{
    write(1, "NM\n", 3);
}

int main(void)
{
    char *yo = "ya";
    toto();
    return (0);
}