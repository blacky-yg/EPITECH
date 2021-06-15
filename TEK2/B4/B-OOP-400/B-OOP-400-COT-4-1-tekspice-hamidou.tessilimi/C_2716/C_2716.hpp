/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** C_2716
*/

#ifndef C_2716_HPP
#define C_2716_HPP

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class C_2716 : public IComponent
    {
    public:
        C_2716();
        ~C_2716();

        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        Tristate _pins[21];
        std::unordered_map<std::size_t, IComponent *> _links;
        std::unordered_map<std::size_t, std::size_t> _link_map;
    };
}

#endif /* !C_2716_HPP */