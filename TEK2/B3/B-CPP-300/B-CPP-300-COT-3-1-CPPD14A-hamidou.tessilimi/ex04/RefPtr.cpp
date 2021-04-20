/*
** EPITECH PROJECT, 2021
** day14a
** File description:
** RefPtr
*/

#include "RefPtr.hpp"

RefPtr::RefPtr(BaseComponent *rawPtr)
{
    _rawPtr = rawPtr;
}

RefPtr::RefPtr(): _rawPtr(nullptr)
{
}

RefPtr::~RefPtr()
{
    delete _rawPtr;
}

RefPtr::RefPtr(const RefPtr &ref)
{
    _rawPtr = ref._rawPtr;
}

RefPtr &RefPtr::operator=(RefPtr const &ref)
{
    _rawPtr = ref._rawPtr;
    return (*this);
}

BaseComponent *RefPtr::get() const
{
    return (_rawPtr);
}