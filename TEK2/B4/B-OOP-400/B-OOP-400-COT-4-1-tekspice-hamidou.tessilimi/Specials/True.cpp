/*
** EPITECH PROJECT, 2021
** True
** File description:
** True
*/

#include "True.hpp"

namespace nts
{
    True::True()
    {
        _linked = nullptr;
    }

    True::~True()
    {
    }

    void True::simulate(std::size_t tick)
    {
        if (_linked)
            _linked->simulate(tick);
    }

    nts::Tristate True::compute(std::size_t pin)
    {
        return (Tristate::TRUE);
    }

    void True::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        _pins[pin - 1] = otherPin;
        _linked = &other;
    }

    void True::dump() const
    {
        std::cout << 1 << std::endl;
    }

}