/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Victim
*/

#include "Victim.hpp"

Victim::Victim(const std::string &name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
    return (_name);
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &s, Victim &victim)
{
    s << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return (s);
}