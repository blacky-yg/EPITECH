/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** CmdLine
*/

#include "CmdLine.hpp"

namespace nts {
    CmdLine::CmdLine(Parser parser, Circuit *circuit): _parser(parser), _circuit(circuit)
    {
    }

    CmdLine::~CmdLine()
    {
    }

    void CmdLine::run()
    {
        std::cout << "> ";
        while (std::getline(std::cin, _cmd) && _cmd != "exit")
        {
            if (_cmd == "display") {
                _circuit->dump();
                std::cout << "> ";
            } else if (_cmd == "simulate") {
                _circuit->simulate(0);
                std::cout << "> ";
            } else
                std::cout << "> ";
        }
    }
}