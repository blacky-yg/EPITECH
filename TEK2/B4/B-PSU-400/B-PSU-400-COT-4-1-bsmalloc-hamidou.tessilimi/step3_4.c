/*
** EPITECH PROJECT, 2021
** bsmalloc
** File description:
** main
*/

#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main(void)
{
    void *handle;
    void (*my_putstr)(char*);
    char *error;

    handle = dlopen ("/home/blacky/Work/B-PSU-400-COT-4-1-bsmalloc-hamidou.tessilimi/libstep1.so", RTLD_LAZY);
    if (!handle) {
        printf("%s", dlerror());
        exit(1);
    }
    my_putstr = dlsym(handle, "my_putstr");
    if ((error = dlerror()) != NULL)  {
        printf("%s", error);
        exit(1);
    }
    printf("%p\n", my_putstr);
    dlclose(handle);
}