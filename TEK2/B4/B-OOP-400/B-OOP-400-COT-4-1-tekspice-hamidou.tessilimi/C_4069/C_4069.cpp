/*
** EPITECH PROJECT, 2021
** C_4001
** File description:
** C_4001
*/

#include "C_4069.hpp"

namespace nts
{

    C_4069::C_4069()
    {
        for (int i = 0; i < 12; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4069::~C_4069()
    {
    }

    void C_4069::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4069::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 12)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 2:
            break;
        case 4:
            break;
        case 6:
            break;
        case 8:
            break;
        case 10:
            break;
        case 12:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4069::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 13)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4069::dump() const
    {
    }

}