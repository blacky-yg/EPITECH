/*
** EPITECH PROJECT, 2021
** Factory
** File description:
** Factory
*/

#include "Factory.hpp"
#include "../Include/Components.hpp"

namespace nts
{
    Factory::Factory()
    {
        _register.push_back("4001");
        _register.push_back("4011");
        _register.push_back("4030");
        _register.push_back("4071");
        _register.push_back("4081");
        _register.push_back("4069");
        _register.push_back("4008");
        _register.push_back("4013");
        _register.push_back("4017");
        _register.push_back("4040");
        _register.push_back("4094");
        _register.push_back("4512");
        _register.push_back("4801");
        _register.push_back("2716");
        _register.push_back("logger");
        _register.push_back("input");
        _register.push_back("output");
        _register.push_back("false");
        _register.push_back("true");
    }

    Factory::~Factory()
    {
    }

    nts::IComponent *Factory::createSpecialsComponent(const std::string &type)
    {
        switch (find(_register.begin(), _register.end(), type) - _register.begin())
        {
        case LOGGER:
            return (new Logger);
        case INPUT:
            return (new Input);
        case OUTPUT:
            return (new Output);
        case FALSE:
            return (new False);
        case TRUE:
            return (new True);
        default:
            throw (NtsError("type doesnt existe!"));
        }
        return (nullptr);
    }

    nts::IComponent *Factory::createComponent(const std::string &type)
    {
        if (std::find(_register.begin(), _register.end(), type) == _register.end())
            throw(nts::NtsError("Component : " + type + " not found !"));
        switch (find(_register.begin(), _register.end(), type) - _register.begin())
        {
        case _4001:
            return (new C_4001);
        case _4011:
            return (new C_4011);
        case _4030:
            return (new C_4030);
        case _4071:
            return (new C_4071);
        case _4081:
            return (new C_4081);
        case _4069:
            return (new C_4069);
        case _4008:
            return (new C_4008);
        case _4013:
            return (new C_4013);
        case _4017:
            return (new C_4017);
        case _4040:
            return (new C_4040);
        case _4094:
            return (new C_4094);
        case _4512:
            return (new C_4512);
        case _4801:
            return (new C_4801);
        case _2716:
            return (new C_2716);
        default:
            return (createSpecialsComponent(type));
        }
    }
}