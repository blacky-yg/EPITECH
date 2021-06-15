/*
** EPITECH PROJECT, 2021
** C_4514
** File description:
** C_4514
*/

#include "C_4514.hpp"

namespace nts
{
    C_4514::C_4514()
    {
        for (int i = 0; i < 22; i++)
            _pins[i] = Tristate::UNDEFINED;
    }

    C_4514::~C_4514()
    {
    }

    void C_4514::simulate(std::size_t tick)
    {
    }

    nts::Tristate C_4514::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 22)
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
        case 8:
            break;
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
        case 18:
            break;
        case 19:
            break;
        case 20:
            break;
        }
        return (_pins[pin - 1]);
    }

    void C_4514::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin < 1 || pin > 23)
            throw(nts::NtsError("setLink : invalid pin"));
        _link_map[pin - 1] = otherPin;
        _links[pin - 1] = &other;
    }

    void C_4514::dump() const
    {
    }

}