/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** Circuit
*/

#ifndef CIRCUIT_HPP
#define CIRCUIT_HPP

#include "../IComponent/IComponent.hpp"
#include "../Factory/Factory.hpp"

namespace nts
{
    class Circuit : public IComponent
    {
    public:
        Circuit();
        ~Circuit();
        void simulate(std::size_t tick);

        nts::Tristate compute(std::size_t pin);
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
        void dump() const;
        void addComponent(const std::string &type, const std::string &name);
        void setInput(const std::string &name, nts::Tristate state);
        void linkIt(const std::string &n1, std::size_t p1, const std::string &n2, std::size_t p2);

    private:
        std::unordered_map<std::string, IComponent *> all_component;
        std::unordered_map<std::string, IComponent *> input_clock;
        std::unordered_map<std::string, IComponent *> outputs;
        Factory factory;
        std::size_t _tick;
    };
}

#endif /* !CIRCUIT_HPP */