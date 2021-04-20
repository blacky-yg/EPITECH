/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(ToyType type, const std::string &name, const std::string &filename): _type(type), _name(name), _picture(filename)
{
    _picture.getPictureFromFile(filename);
}

Toy::~Toy()
{
}

Toy::Toy(const Toy &ref)
{
    _type = ref.getType();
    _name = ref.getName();
    _picture.data = ref.getAscii();
}

// SETTERS

void Toy::setName(const std::string &name)
{
    _name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    if (_picture.getPictureFromFile(filename))
        return (true);
    error.type = Toy::Error::PICTURE;
    return (false);
}

// GETTERS

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

Toy::Error Toy::getLastError() const
{
    return (error);
}

// OPERATORS

Toy &Toy::operator=(const Toy &ref)
{
    _name = ref.getName();
    _type = ref.getType();
    _picture.data = ref.getAscii();
    return (*this);
}

std::ostream &operator<<(std::ostream &s, const Toy &ref)
{
    s << ref.getName() << std::endl;
    s << ref.getAscii() << std::endl;
    return (s);
}

Toy &Toy::operator<<(const std::string str)
{
    _picture.data = str;
    return (*this);
}

void Toy::speak(const std::string statement)
{
    std::cout << _name << " \"" << statement << "\"" << std::endl;
}

bool Toy::speak_es(const std::string statement)
{
    (void)statement;
    error.type = Error::SPEAK;
    return (false);
}

std::string Toy::Error::what() const
{
    if (type == SPEAK)
        return ("wrong mode");
    else if (type == PICTURE)
        return ("bad new illustration");
    return ("");
}

std::string Toy::Error::where() const
{
    if (type == SPEAK)
        return ("speak_es");
    else if (type == PICTURE)
        return ("setAscii");
    return ("");
}