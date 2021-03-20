/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** main
*/

#include "include/malloc.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    // FIRST TEST
    char *test1 = malloc(7);

    if (test1 == NULL) {
        write(1, "Malloc failed\n", strlen("Malloc failed\n"));
        return (0);
    }
    test1[0] = 'b';
    test1[1] = 'l';
    test1[2] = 'a';
    test1[3] = 'c';
    test1[4] = 'k';
    test1[5] = 'y';
    test1[6] = '\0';
    (!strcmp(test1, "blacky")) ? printf("Success\n") : printf("Echec\n");
    free(test1);

    // SECOND TEST
    char *test2 = malloc(5);
    if (test2 == NULL) {
        write(1, "Malloc failed\n", strlen("Malloc failed\n"));
        return (0);
    }
    test2[0] = 'b';
    test2[1] = 'l';
    test2[2] = '\0';
    (!strcmp(test2, "bl")) ? printf("Success\n") : printf("Echec\n");
    free(test2);

    char *test3 = malloc(30);
    if (test3 == NULL) {
        write(1, "Malloc failed\n", strlen("Malloc failed\n"));
        return (0);
    }
    int i = 0;
    for (; i < 26; i++)
        test3[i] = i + 'a';
    test3[i] = '\0';
    (!strcmp(test3, "abcdefghijklmnopqrstuvwxyz")) ? printf("Success\n") : printf("Echec\n");
    free(test3);

    char *test4 = malloc(30);
    if (test4 == NULL) {
        write(1, "Malloc failed\n", strlen("Malloc failed\n"));
        return (0);
    }
    int i = 0;
    for (; i < 26; i++)
        test4[i] = i + 'a';
    test4[i] = '\0';
    (!strcmp(test4, "abcdefghijklmnopqrstuvwxyz")) ? printf("Success\n") : printf("Echec\n");
    return (0);
}