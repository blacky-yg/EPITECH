/*
** EPITECH PROJECT, 2021
** C_4512
** File description:
** C_4512
*/

#include "C_4512.hpp"

namespace nts
{
    C_4512::C_4512()
    {
        for (int i = 0; i < 14; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4512::~C_4512()
    {
    }

    void C_4512::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4512::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 14)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 14:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4512::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 15)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4512::dump() const
    {
    }

}