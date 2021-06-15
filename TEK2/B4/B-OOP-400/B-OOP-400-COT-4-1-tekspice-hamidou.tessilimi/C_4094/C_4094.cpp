/*
** EPITECH PROJECT, 2021
** C_4094
** File description:
** C_4094
*/

#include "C_4094.hpp"

namespace nts
{
    C_4094::C_4094()
    {
        for (int i = 0; i < 14; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4094::~C_4094()
    {
    }

    void C_4094::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4094::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 14)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 9:
            break;
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

    void C_4094::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 15)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4094::dump() const
    {
    }

}