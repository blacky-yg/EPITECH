/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Picture
*/

#include "Picture.hpp"

// CTOR && DTOR

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}

Picture::~Picture()
{
}

// COPY

Picture::Picture(const Picture &ref)
{
    data = ref.data;
}

bool Picture::getPictureFromFile(const std::string &filename)
{
    std::ifstream file(filename);
    std::ostringstream ss;

    if (file.is_open()) {
        ss << file.rdbuf();
        data = ss.str();
    } else {
        data = "ERROR";
        return (false);
    }
    return (true);
}

Picture &Picture::operator=(const Picture &ref)
{
    data = ref.data;
    return (*this);
}