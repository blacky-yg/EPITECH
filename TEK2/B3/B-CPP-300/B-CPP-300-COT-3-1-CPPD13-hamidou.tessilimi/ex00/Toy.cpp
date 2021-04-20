/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(ToyType type, const std::string &name, const std::string &filename): _type(type), _name(name), _picture(filename)
{
}

Toy::~Toy()
{
}

void Toy::setName(const std::string &name)
{
    _name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    if (_picture.getPictureFromFile(filename))
        return (true);
    else
        return (false);
}

std::string Toy::getName() const
{
    return (_name);
}

std::string Toy::getAscii() const
{
    return (_picture.data);
}

Toy::ToyType Toy::getType() const
{
    return (_type);
}