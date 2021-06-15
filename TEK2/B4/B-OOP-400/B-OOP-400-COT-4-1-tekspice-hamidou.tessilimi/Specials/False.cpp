/*
** EPITECH PROJECT, 2021
** False
** File description:
** False
*/

#include "False.hpp"

namespace nts
{
    False::False()
    {
        _linked = nullptr;
    }

    False::~False()
    {
    }

    void False::simulate(std::size_t tick)
    {
        if (_linked)
            _linked->simulate(tick);
    }

    nts::Tristate False::compute(std::size_t pin)
    {
        return (Tristate::FALSE);
    }

    void False::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        _pins[pin - 1] = otherPin;
        _linked = &other;
    }

    void False::dump() const
    {
        std::cout << 0 << std::endl;
    }
}