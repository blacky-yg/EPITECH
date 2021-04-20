/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** Parts
*/

#include "Parts.hpp"

// ARMS

Arms::Arms(const std::string &serial, bool functional)
{
    _serial = serial;
    _functional = functional;
}

Arms::~Arms()
{
}

bool Arms::is_Functional() const
{
    if (_functional == true)
        return (true);
    else
        return (false);
}

std::string Arms::serial()
{
    return (_serial);
}

void Arms::informations() const
{
    std::cout << "\t[Parts] " << "Arms " << _serial << " status : ";
    if (is_Functional())
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}

// LEGS

Legs::Legs(const std::string &serial, bool functional)
{
    _serial = serial;
    _functional = functional;
}

Legs::~Legs()
{
}

bool Legs::is_Functional() const
{
    if (_functional == true)
        return (true);
    else
        return (false);
}

std::string Legs::serial()
{
    return (_serial);
}

void Legs::informations() const
{
    std::cout << "\t[Parts] " << "Legs " << _serial << " status : ";
    if (is_Functional())
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}

// HEAD

Head::Head(const std::string &serial, bool functional)
{
    _serial = serial;
    _functional = functional;
}

Head::~Head()
{
}

bool Head::is_Functional() const
{
    if (_functional == true)
        return (true);
    else
        return (false);
}

std::string Head::serial()
{
    return (_serial);
}

void Head::informations() const
{
    std::cout << "\t[Parts] " << "Head " << _serial << " status : ";
    if (is_Functional())
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}