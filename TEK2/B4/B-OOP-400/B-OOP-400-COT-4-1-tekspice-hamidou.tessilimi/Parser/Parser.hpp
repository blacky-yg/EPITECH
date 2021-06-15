/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** Parser
*/

#ifndef PARSER_HPP
#define PARSER_HPP

#include "../Circuit/Circuit.hpp"
#include "../Factory/Factory.hpp"

namespace nts
{
    #define SEPARATOR(c) (c == ' ' || c == '\t')
    class Parser
    {
    public:
        Parser(Circuit *circuit, const std::string &ntsfile);
        ~Parser();

        void dump() const;
        void run();
        void runLinks(int i);
        bool isNumber(const std::string &str);
        std::vector<std::string> mySplit(const std::string &str, const char delim);
        std::string cleanstr(const std::string &str);
        std::string removeComment(const std::string &str);
        void cleanfile();
    private:
        Circuit *_circuit;
        std::vector<std::string> _ntsfile;
    };
}

#endif /* !PARSER_HPP */