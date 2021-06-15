/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Utils
*/

#include "../include/Utils.hpp"

Utils::Utils()
{
}

std::string Utils::readFile(std::string path)
{
    std::string title;
    std::ifstream is(path);

    if (is.is_open()) {
        title.reserve(is.tellg());
        title.assign(std::istreambuf_iterator<char>(is), std::istreambuf_iterator<char>());
        is.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
        exit(84);
    }
    return title;
}

Utils::~Utils()
{
}
