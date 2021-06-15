/*
** EPITECH PROJECT, 2021
** 4030
** File description:
** 4030
*/

#include "C_4030.hpp"

namespace nts
{
    C_4030::C_4030()
    {
        for (int i = 0; i < 12; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4030::~C_4030()
    {
    }

    void C_4030::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4030::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 12)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 3:
            break;
        case 4:
            break;
        case 10:
            break;
        case 11:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4030::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 13)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4030::dump() const
    {
    }
}