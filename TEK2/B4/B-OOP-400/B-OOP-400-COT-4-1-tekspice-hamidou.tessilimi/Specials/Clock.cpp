/*
** EPITECH PROJECT, 2021
** Clock
** File description:
** Clock
*/

#include "Clock.hpp"

namespace nts
{
    Clock::Clock()
    {
        _states[CURRENT] = Tristate::UNDEFINED;
        _states[NEXT] = Tristate::UNDEFINED;
        _linked = nullptr;
    }

    Clock::~Clock()
    {
    }

    void Clock::simulate(std::size_t tick)
    {
        _states[CURRENT] = _states[NEXT];
        if (_states[CURRENT] != Tristate::UNDEFINED)
            _states[NEXT] = (_states[CURRENT] == Tristate::TRUE) ? Tristate::FALSE : Tristate::TRUE;
        if (_linked)
            _linked->simulate(tick);
    }
    nts::Tristate Clock::compute(std::size_t pin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        return (_states[pin - 1]);
    }

    void Clock::dump() const
    {
        if (_states[CURRENT] == Tristate::UNDEFINED)
            std::cout << "U" << std::endl;
        else
            std::cout << _states[CURRENT] << std::endl;
    }

    void Clock::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        _pins[pin - 1] = otherPin;
        _linked = &other;
    }
}