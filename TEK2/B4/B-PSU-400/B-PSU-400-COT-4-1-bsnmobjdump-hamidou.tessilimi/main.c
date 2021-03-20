/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    void *handle;
    void (*about)(void);
    char *error;

    if (ac != 2)
        return (84);
    else {
        handle = dlopen(av[1], RTLD_LAZY);
        if (!handle) {
            printf("%s\n", dlerror());
            exit(1);
        }
        about = dlsym(handle, "about");
        if ((error = dlerror()) != NULL)  {
            printf("%s\n", error);
            exit(1);
        }
        about();
        dlclose(handle);
    }
    return (0);
}