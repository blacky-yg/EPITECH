/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** Clock
*/

#ifndef CLOCK_HPP
#define CLOCK_HPP

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class Clock : public IComponent
    {
    public:
        typedef enum Value
        {
            CURRENT,
            NEXT
        } Value;
        Clock();
        ~Clock();
        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        Tristate _states[2];
        IComponent *_linked;
        std::unordered_map<std::size_t, std::size_t> _pins;
    };
}

#endif /* !CLOCK_HPP */