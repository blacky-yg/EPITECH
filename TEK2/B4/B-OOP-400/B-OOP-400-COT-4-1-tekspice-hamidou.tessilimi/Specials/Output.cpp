/*
** EPITECH PROJECT, 2021
** Output
** File description:
** Output
*/

#include "Output.hpp"

namespace nts
{
    Output::Output()
    {
        _state = Tristate::UNDEFINED;
        _linked = nullptr;
    }

    Output::~Output()
    {
    }

    nts::Tristate Output::compute(std::size_t pin)
    {
        if (pin != 1)
            throw(nts::NtsError("Compute : invalid pin"));
        return (_state);
    }

    void Output::simulate(std::size_t tick)
    {
        if (_linked)
            _state = _linked->compute(_pins[0]);
    }

    void Output::dump() const
    {
        if (_state == Tristate::UNDEFINED)
            std::cout << "U" << std::endl;
        else
            std::cout << _state << std::endl;
    }

    void Output::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        _pins[pin - 1] = otherPin;
        _linked = &other;
    }
}