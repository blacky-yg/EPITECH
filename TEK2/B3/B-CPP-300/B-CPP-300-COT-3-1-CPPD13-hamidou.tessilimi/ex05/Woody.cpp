/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Woody
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &filename): Toy(Toy::WOODY, name, filename)
{
}

Woody::~Woody()
{
}

void Woody::speak(const std::string statement)
{
    std::cout << "WOODY: " << _name << " \"" << statement << "\"" << std::endl;
}