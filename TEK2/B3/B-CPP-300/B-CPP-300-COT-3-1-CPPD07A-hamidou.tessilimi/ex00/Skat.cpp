/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** Skat
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks): _name(name), _stimpaks(stimPaks)
{
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return (_stimpaks);
}

const std::string &Skat::name()
{
    return (_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (stimPaks() >= number) {
        _stimpaks = number;
        stock += number;
        std::cout << "Keep the change." << std::endl;
    } else
        std::cout << "Don't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    _stimpaks += number;
}

void Skat::useStimPaks()
{
    if (stimPaks() > 0) {
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
        _stimpaks -= 1;
    } else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status()
{
    std::cout << "Soldier " << _name << " reporting " << _stimpaks << " stimpaks remaining sir!" << std::endl;
}