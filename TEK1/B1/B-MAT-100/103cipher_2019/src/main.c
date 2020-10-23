/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** main
*/

#include "../include/my.h"
#include "../include/103cipher.h"

int main(int ac, char *av[])
{
    int flag = 0;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        usage();
    else if (ac == 4) {
        flag = my_getnbr(av[3]);
        if ((flag != 0) && (flag != 1))
            return (84);
        if (flag == 0)
            crypt_msg(av);
    } else
        return (84);
}