/*
** EPITECH PROJECT, 2021
** Input
** File description:
** Input
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class Input : public IComponent
    {
        typedef enum Value
        {
            CURRENT,
            NEXT
        } Value;

    public:
        Input();
        ~Input();
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

#endif /* !INPUT_HPP_ */
