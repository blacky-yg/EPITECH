/*
** EPITECH PROJECT, 2021
** C_4008
** File description:
** C_4008
*/

#include "C_4008.hpp"

namespace nts
{
    C_4008::C_4008()
    {
        for (int i = 0; i < 14; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4008::~C_4008()
    {
    }

    void C_4008::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4008::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 14)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4008::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 15)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4008::dump() const
    {
    }
}