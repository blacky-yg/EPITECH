/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** CmdLine
*/

#ifndef CMD_LINE_HPP
#define CMD_LINE_HPP

#include "../Parser/Parser.hpp"
#include "../Circuit/Circuit.hpp"

namespace nts {
    class CmdLine {
        public:
            CmdLine(Parser, Circuit *);
            ~CmdLine();

            void run();
            void display() const;

            std::string _cmd;
            Circuit *_circuit;
            Parser _parser;
        private:
    };
}

#endif /* !CMD_LINE_HPP */