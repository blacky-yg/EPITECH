/*
** EPITECH PROJECT, 2021
** day03
** File description:
** my_cat
*/

#include "my_cat.hpp"

void my_cat(int i, char *filename)
{
    std::string line;
    std::ifstream file(filename);

    if (i == 0)
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    else if (file.is_open()) {
        while (getline(file, line))
            std::cout << line << std::endl;
        file.close();
    } else
        std::cerr << "my_cat: " << filename << ": No such file or directory" << std::endl;
}