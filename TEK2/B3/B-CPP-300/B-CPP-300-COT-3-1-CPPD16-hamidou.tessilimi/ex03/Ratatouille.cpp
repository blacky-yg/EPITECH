/*
** EPITECH PROJECT, 2021
** day16
** File description:
** Ratatouille
*/

#include "Ratatouille.hpp"

Ratatouille::Ratatouille()
{
}

Ratatouille::~Ratatouille()
{
}

Ratatouille::Ratatouille(const Ratatouille &copy)
{
    _food << copy.kooc();
}

Ratatouille &Ratatouille::operator=(const Ratatouille &ref)
{
    _food.str("");
    _food << ref.kooc();
    return (*this);
}

std::string Ratatouille::kooc() const
{
    return (_food.str());
}

Ratatouille &Ratatouille::addVegetable(unsigned char c)
{
    _food << c;
    return (*this);
}

Ratatouille &Ratatouille::addCondiment(unsigned int nb)
{
    _food << nb;
    return (*this);
}

Ratatouille &Ratatouille::addSpice(double db)
{
    _food << db;
    return (*this);
}

Ratatouille &Ratatouille::addSauce(const std::string &str)
{
    _food << str;
    return (*this);
}