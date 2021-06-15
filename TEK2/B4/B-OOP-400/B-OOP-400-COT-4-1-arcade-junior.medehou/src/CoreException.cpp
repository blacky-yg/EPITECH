/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** CoreException
*/

#include "../include/CoreException.hpp"

CoreException::CoreException(const std::string &msg) throw() : _msg(msg)
{
}

CoreException::~CoreException()
{
}

const std::string CoreException::what() const throw()
{
    return (_msg.c_str());
}