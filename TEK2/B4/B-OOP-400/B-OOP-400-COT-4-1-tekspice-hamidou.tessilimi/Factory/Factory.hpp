/*
** EPITECH PROJECT, 2021
** Factory
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include "../IComponent/IComponent.hpp"

namespace nts
{
    class Factory
    {
    public:
        typedef enum Type
        {
            _4001,
            _4011,
            _4030,
            _4071,
            _4081,
            _4069,
            _4008,
            _4013,
            _4017,
            _4040,
            _4094,
            _4512,
            _4801,
            _2716,
            LOGGER,
            INPUT,
            OUTPUT,
            FALSE,
            TRUE,
        } Type;
        Factory();
        ~Factory();
        nts::IComponent *createSpecialsComponent(const std::string &type);
        nts::IComponent *createComponent(const std::string &type);

    private:
        std::vector<std::string> _register;
    };
}

#endif /* !FACTORY_HPP_ */
