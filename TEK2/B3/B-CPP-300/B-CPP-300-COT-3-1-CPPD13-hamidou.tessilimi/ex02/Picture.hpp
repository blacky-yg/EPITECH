/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Picture
*/

#ifndef PICTURE_HPP
#define PICTURE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Picture {
    public:
        Picture(): data("") {}
        Picture(const std::string &file);
        virtual ~Picture();

        Picture(const Picture &ref);
        Picture &operator=(const Picture &ref);

        bool getPictureFromFile(const std::string &filename);
        std::string data;
};

#endif /* !PICTURE_HPP */