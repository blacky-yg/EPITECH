/*
** EPITECH PROJECT, 2021
** day14a
** File description:
** SimplePtr
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr)
{
    _rawPtr = rawPtr;
}

SimplePtr::~SimplePtr()
{
    delete _rawPtr;
}

SimplePtr::SimplePtr(SimplePtr const &ref)
{
    _rawPtr = ref._rawPtr;
}

SimplePtr &SimplePtr::operator=(SimplePtr const &ref)
{
    _rawPtr = ref._rawPtr;
    return (*this);
}

BaseComponent *SimplePtr::get() const
{
    return (_rawPtr);
}