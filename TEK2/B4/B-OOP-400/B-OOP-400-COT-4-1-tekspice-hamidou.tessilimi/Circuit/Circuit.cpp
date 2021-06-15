/*
** EPITECH PROJECT, 2021
** Circuit
** File description:
** Circuit
*/

#include "Circuit.hpp"

namespace nts
{
    Circuit::Circuit()
    {
        _tick = 0;
    }

    Circuit::~Circuit()
    {
    }

    void Circuit::simulate(std::size_t tick)
    {
        ++_tick;
    }

    Tristate Circuit::compute(std::size_t pin)
    {
        Tristate state = UNDEFINED;

        for (auto it = all_component.begin(); it != all_component.end(); ++it)
            state = it->second->compute(pin);
        return (state);
    }

    void Circuit::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
    }

    void Circuit::linkIt(const std::string &n1, std::size_t p1, const std::string &n2, std::size_t p2)
    {
        IComponent *c1;
        IComponent *c2;

        if (all_component.find(n1) == all_component.end() &&\
        input_clock.find(n1) == input_clock.end() && \
        outputs.find(n1) == outputs.end())
            throw (NtsError("component inexistant : " + n1));
        if (all_component.find(n2) == all_component.end() &&\
        input_clock.find(n2) == input_clock.end() && \
        outputs.find(n2) == outputs.end())
            throw (NtsError("component inexistant : " + n2));
        if (all_component.find(n1) != all_component.end())
            c1 = all_component[n1];
        if (input_clock.find(n1) != input_clock.end())
            c1 = input_clock[n1];
        if (outputs.find(n1) != outputs.end())
            c1 = outputs[n1];
        if (all_component.find(n2) != all_component.end())
            c2 = all_component[n2];
        if (input_clock.find(n2) != input_clock.end())
            c2 = input_clock[n2];
        if (outputs.find(n2) != outputs.end())
            c2 = outputs[n2];
        c1->setLink(p1, *c2, p2);
        c2->setLink(p2, *c1, p1);
    }

    void Circuit::dump() const
    {
        std::cout << "tick: " << _tick << std::endl;
        std::cout << "input(s):" << std::endl;
        // sort(input_clock.begin(), input_clock.end(), sortByVal);
        // sort(output_clock.begin(), output_clock.end(), sortByVal);
        for (auto it = input_clock.begin(); it != input_clock.end(); ++it)
            std::cout << "  " << it->first << ": " << "GetValue" << std::endl;
        std::cout << "output(s):" << std::endl;
        for (auto it = outputs.begin(); it != outputs.end(); ++it)
            std::cout << "  " << it->first << ": " << "GetValue" << std::endl;
    }

    void Circuit::addComponent(const std::string &type, const std::string &name)
    {
        if (type == "input" || type == "clock")
            input_clock[name] = factory.createComponent(type);
        else if (type == "output")
            outputs[name] = factory.createComponent(type);
        else
            all_component[name] = factory.createComponent(type);
    }

}