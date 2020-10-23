/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** usage
*/

#include "../include/my.h"
#include "../include/103cipher.h"

void usage(void)
{
    printf("USAGE\n");
    printf( "    ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("    message     a message, made of ASCII characters\n");
    printf("    key         the encryption, made of ASCII characters\n");
    printf("    flag        0 for the message to be encrypted, 1 to be decrypted\n");
}