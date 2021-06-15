/*
** EPITECH PROJECT, 2021
** Input
** File description:
** Input
*/

#include "Input.hpp"
namespace nts
{

    Input::Input()
    {
        _states[CURRENT] = Tristate::UNDEFINED;
        _states[NEXT] = Tristate::UNDEFINED;
        _linked = nullptr;
    }

    Input::~Input()
    {
    }

    void Input::simulate(std::size_t tick)
    {
        _states[CURRENT] = _states[NEXT];
        if (_linked)
            _linked->simulate(tick);
    }

    nts::Tristate Input::compute(std::size_t pin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        return (_states[pin - 1]);
    }

    void Input::dump() const
    {
        if (_states[CURRENT] == Tristate::UNDEFINED)
            std::cout << "U" << std::endl;
        else
            std::cout << _states[CURRENT] << std::endl;
    }

    void Input::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        if (pin != 1)
            throw(nts::NtsError("setLink : invalid pin"));
        _pins[pin - 1] = otherPin;
        _linked = &other;
    }

}