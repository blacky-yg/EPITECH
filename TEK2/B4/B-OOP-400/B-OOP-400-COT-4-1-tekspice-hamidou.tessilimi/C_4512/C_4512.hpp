/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** C_4512
*/

#ifndef C_4512_HPP
#define C_4512_HPP

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class C_4512 : public IComponent
    {
    public:
        C_4512();
        ~C_4512();

        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        Tristate _pins[14];
        std::unordered_map<std::size_t, IComponent *> _links;
        std::unordered_map<std::size_t, std::size_t> _link_map;
    };
}

#endif /* !C_4512_HPP */