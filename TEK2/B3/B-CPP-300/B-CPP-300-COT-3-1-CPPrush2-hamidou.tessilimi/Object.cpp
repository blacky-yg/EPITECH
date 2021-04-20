/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Object
*/

#include "Object.hpp"

Object::Object(const std::string &title)
{
    _title = title;
}

Object::~Object()
{
}

const std::string &Object::getTitle() const
{
    return _title;
}

std::ostream &operator<<(std::ostream &my_stream, Object &my_object)
{
    my_stream << "Object: " << my_object.getTitle() << std::endl;
    return (my_stream);
}