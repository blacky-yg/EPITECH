/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** False
*/

#ifndef FALSE_HPP
#define FALSE_HPP

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class False : public IComponent
    {
    public:
        False();
        ~False();
        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        IComponent *_linked;
        std::unordered_map<std::size_t, std::size_t> _pins;
    };
}

#endif /* !FALSE_HPP */