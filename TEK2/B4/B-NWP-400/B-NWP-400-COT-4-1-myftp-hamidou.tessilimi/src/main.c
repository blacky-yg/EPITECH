/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** main
*/

#include "../include/myftp.h"

int main(int ac, char *av[])
{
    info_t *info;
    struct sockaddr_in *_addr;

    if (check_av(ac, av) == 84)
        return (84);
    printf("Port [%s] and Path = [%s]\n", av[1], av[2]);
    printf("Waiting for connexion...\n");
    _addr = init_addr(atoi(av[1]));
    if ((info = init_struct(_addr)) == NULL)
        return (84);
    if ((info->_socket = init_socket(*_addr)) == 84)
        return (84);
    info->_filepath = av[2];
    chdir(info->_filepath);
    if (ftp_server(info, *_addr) == 84)
        return (84);
    return (0);
}