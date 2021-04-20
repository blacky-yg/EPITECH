/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Picture
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &filename)
{
    std::ifstream file(filename);
    std::ostringstream ss;
    std::string line;

    if (filename == "") {
        data = "";
        return (true);
    } else if (file.is_open()) {
        ss << file.rdbuf();
        data = ss.str();
        return (true);
    } else {
        data = "ERROR";
        return (false);
    }
    return (true);
}