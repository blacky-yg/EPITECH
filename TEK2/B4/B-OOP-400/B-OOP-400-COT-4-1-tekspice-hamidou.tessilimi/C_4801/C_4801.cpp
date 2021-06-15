/*
** EPITECH PROJECT, 2021
** C_4081
** File description:
** C_4801
*/

#include "C_4801.hpp"

namespace nts
{
    C_4801::C_4801()
    {
        for (int i = 0; i < 21; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4801::~C_4801()
    {
    }

    void C_4801::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4801::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 21)
            throw(nts::NtsError("setLink : invalid pin"));
        switch (pin)
        {
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4801::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 22)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4801::dump() const
    {
    }
}