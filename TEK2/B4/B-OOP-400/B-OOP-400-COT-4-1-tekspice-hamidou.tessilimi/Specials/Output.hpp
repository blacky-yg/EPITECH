/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** Output
*/

#ifndef OUTPUT_HPP
#define OUTPUT_HPP
#include "../IComponent/IComponent.hpp"

namespace nts
{
    class Output : public IComponent
    {
    public:
        Output();
        ~Output();
        void simulate(std::size_t tick);
        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;

    private:
        Tristate _state;
        IComponent *_linked;
        std::unordered_map<std::size_t, std::size_t> _pins;
    };
}

#endif /* !OUTPUT_HPP */