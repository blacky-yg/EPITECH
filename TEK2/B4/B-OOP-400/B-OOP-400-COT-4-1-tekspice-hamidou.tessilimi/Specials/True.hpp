/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** True
*/

#ifndef TRUE_HPP
#define TRUE_HPP

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class True : public IComponent
    {
    public:
        True();
        ~True();
        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        IComponent *_linked;
        std::unordered_map<std::size_t, std::size_t> _pins;
    };
}

#endif /* !TRUE_HPP */