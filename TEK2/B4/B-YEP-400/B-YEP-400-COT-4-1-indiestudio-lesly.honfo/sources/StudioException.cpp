/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** StudioException
*/

#include "StudioException.hpp"

StudioException::StudioException(const std::string &msg) : _msg(msg)
{
}

StudioException::~StudioException()
{
}

const std::string &StudioException::getMsg() const
{
    return (_msg);
}

const char *StudioException::what() const throw()
{
    return (_msg.c_str());
}