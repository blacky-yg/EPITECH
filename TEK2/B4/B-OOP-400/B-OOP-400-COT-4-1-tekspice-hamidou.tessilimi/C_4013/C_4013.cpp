/*
** EPITECH PROJECT, 2021
** C_4013
** File description:
** C_4013
*/

#include "C_4013.hpp"

namespace nts
{
    C_4013::C_4013()
    {
        for (int i = 0; i < 12; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4013::~C_4013()
    {
    }

    void C_4013::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4013::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 12)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 1:
            break;
        case 2:
            break;
        case 12:
            break;
        case 13:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4013::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 13)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4013::dump() const
    {
    }
}
