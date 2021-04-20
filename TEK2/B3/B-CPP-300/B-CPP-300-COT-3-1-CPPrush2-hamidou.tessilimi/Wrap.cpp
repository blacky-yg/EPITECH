/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Wrap
*/

#include "Wrap.hpp"

// Wrap

Wrap::Wrap()
{
    nullptr_t nul;

    _obj = nul;
    _isOpen = true;
}

Wrap::~Wrap()
{
}

void Wrap::wrapMeThat(Object *obj)
{
    nullptr_t nul;

    if (_type == BOX) {
        if (_obj == nul && _isOpen) {
            _obj = obj;
            std::cout << "tuuuut tuuut tuut" << std::endl;
        } else if (_isOpen)
            std::cerr << "The Box is FULL" << std::endl;
        else
            std::cerr << "The Box is Close" << std::endl;
    } else if (_type == GIFTPAPER) {
        if (_obj == nul) {
            _obj = obj;
            std::cout << "tuuuut tuuut tuut" << std::endl;
        } else
            std::cerr << "The Box is FULL" << std::endl;
    }
}

void Wrap::openMe()
{
    if (!_isOpen) {
        _isOpen = true;
        std::cout << "The Box is Open now" << std::endl;
    } else
        std::cerr << "The Box is FULL" << std::endl;
}

void Wrap::closeMe()
{
    if (_isOpen) {
        _isOpen = false;
        std::cout << "The Box is Closed now" << std::endl;
    } else
        std::cerr << "The Box is FULL" << std::endl;
}

Object *Wrap::getObject()
{
    Object *obj;
    nullptr_t nul;

    if (_isOpen && !_obj) {
        obj = _obj;
        _obj = nul;
        std::cout << " whistles working " << std::endl;
        return (obj);
    } else if (!_obj) {
        std::cerr << "The Box is Empty" << std::endl;
        return (nul);
    }
    std::cerr << "The Box is not Open" << std::endl;
    return (nul);
}

bool Wrap::isEmpty() const
{
    if (!_obj)
        return (true);
    return (false);
}

Wrap::WrapElem Wrap::getType() const
{
    return (_type);
}

// BOX

Box::Box(): Wrap()
{
    _type = BOX;
}

Box::~Box()
{
}

// GIFTPAPER

GiftPaper::GiftPaper(): Wrap()
{
    _type = GIFTPAPER;
}

GiftPaper::~GiftPaper()
{
}