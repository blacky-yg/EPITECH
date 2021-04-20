/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Toy
*/

#include "Toy.hpp"

// TOY
Toy::Toy(const std::string &title) : Object(title)
{
}

Toy::~Toy()
{
}

void Toy::isTaken(void) const
{
    if (_type == TEDDY)
        std::cout << "gra hu" << std::endl;
    else if (_type == LITTLEPONY)
        std::cout << "yo man" << std::endl;
}

Toy::ToyType Toy::getType() const
{
    return (_type);
}

// TEDDY

Teddy::Teddy(const std::string &title) : Toy(title)
{
    _type = TEDDY;
}

Teddy::~Teddy()
{
}

// LITTLEPONY

LittlePony::LittlePony(const std::string &title) : Toy(title)
{
    _type = LITTLEPONY;
}

LittlePony::~LittlePony ()
{
}