/*
** EPITECH PROJECT, 2021
** Project
** File description:
** dltest
*/

#include <iostream>
#include <dlfcn.h>

#include "include/IContent.hpp"

int main(int argc, char** argv)
{
    typedef IGame *(*fptr)();
    fptr func;

    void *handle = dlopen(argv[1], RTLD_NOW);
    if (handle == nullptr)
    {
        std::cout << dlerror() << std::endl;
        exit(EXIT_FAILURE);
    }

    func = (fptr)dlsym(handle, "loadGame");
    if (!func) {
        std::cout << dlerror() << std::endl;
        exit(EXIT_FAILURE);
    }

    IGame *lib = func();
    lib->play();

    dlclose(handle);
    return 0;
}