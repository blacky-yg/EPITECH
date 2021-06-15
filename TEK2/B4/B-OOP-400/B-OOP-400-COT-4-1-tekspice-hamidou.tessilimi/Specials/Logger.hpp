/*
** EPITECH PROJECT, 2021
** Logger
** File description:
** Logger
*/

#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class Logger : public IComponent
    {
    public:
        Logger();
        ~Logger();
        void simulate(std::size_t tick) {}
        nts::Tristate compute(std::size_t pin) {
            return (Tristate::UNDEFINED);
        }
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) {}
        void dump() const {}

    private:
    };

}
#endif /* !LOGGER_HPP_ */
