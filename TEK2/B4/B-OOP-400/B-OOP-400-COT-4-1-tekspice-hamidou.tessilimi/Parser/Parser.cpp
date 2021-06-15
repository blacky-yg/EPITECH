/*
** EPITECH PROJECT, 2021
** Parser
** File description:
** Parser
*/

#include "Parser.hpp"
#include <string>

namespace nts
{
    Parser::Parser(Circuit *circuit, const std::string &ntsfile)
        : _circuit(circuit)
    {
        std::ifstream s(ntsfile);
        std::string tmp;

        if (s.fail())
            throw(NtsError("Opening file : " + ntsfile));
        auto tab = mySplit(ntsfile, '.');
        if (tab[tab.size() - 1] != "nts")
            throw(NtsError("Opening file not ended by nts : " + ntsfile));
        while (std::getline(s, tmp))
            _ntsfile.push_back(tmp);
    }

    bool Parser::isNumber(const std::string &str)
    {
        if (str == "")
            return (false);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] < '0' || str[i] > '9')
                return (false);
        }
        return (true);
    }
    void Parser::dump() const
    {
        for (std::string s : _ntsfile)
            std::cout << s << std::endl;
    }

    std::vector<std::string> Parser::mySplit(const std::string &str, const char delim)
    {
        std::vector<std::string> tab;
        std::stringstream stream(str);
        std::string tmp;

        while (std::getline(stream, tmp, delim))
            tab.push_back(tmp);
        return (tab);
    }

    std::string Parser::cleanstr(const std::string &str)
    {
        int i = 0;
        std::string cleaned("");

        for (; i < str.length() && SEPARATOR(str[i]); i++);
        for (; i < str.length();) {
            for (; i < str.length() && !SEPARATOR(str[i]); i++)
                cleaned += str[i];
            cleaned += ' ';
            for (; i < str.length() && SEPARATOR(str[i]); i++);
        }
        if (!cleaned.empty())
            cleaned.pop_back();
        return (cleaned);
    }

    std::string Parser::removeComment(const std::string &str)
    {
        int i = 0;
        std::string ok("");
        std::string cleaned = cleanstr(str);

        for (; i < cleaned.length() && cleaned[i] != '#'; i++) {
            ok += cleaned[i];
        }
        return (cleanstr(ok));
    }

    void Parser::cleanfile()
    {
        for (int i = 0; i < _ntsfile.size(); i++) {
            _ntsfile[i] = removeComment(_ntsfile[i]);
        }
    }
    void Parser::runLinks(int i)
    {
        for (; i < _ntsfile.size(); i++) {
            auto tab = mySplit(_ntsfile[i], ' ');
            if (tab.size() != 2)
                throw(nts::NtsError("link syntax error!"));
            auto tab2 = mySplit(tab[0], ':');
            auto tab3 = mySplit(tab[1], ':');
            if (tab2.size() != 2 || !isNumber(tab2[1]) || tab2[0] == "")
                throw(nts::NtsError("link : syntax error!"));
            if (tab3.size() != 2 || !isNumber(tab3[1]) || tab3[0] == "")
                throw(nts::NtsError("link : syntax error!"));
            _circuit->linkIt(tab2[0], std::stoi(tab2[1]), tab3[0], std::stoi(tab3[1]));
        }
    }
    void Parser::run()
    {
        int i = 1;
        cleanfile();
        _ntsfile.erase(std::remove(_ntsfile.begin(), _ntsfile.end(), (std::string)""), _ntsfile.end());

        if (_ntsfile[0] != ".chipset:")
            throw(nts::NtsError("Chipset not found!"));
        for (; i < _ntsfile.size() && _ntsfile[i] != ".links:"; i++) {
            auto tab = mySplit(_ntsfile[i], ' ');
            if (tab.size() != 2)
                throw(nts::NtsError("chipset syntax error!"));
            _circuit->addComponent(tab[0], tab[1]);
        }
        if (i == 1)
            throw(nts::NtsError("no chipset!"));
        if (i >= _ntsfile.size() || (i + 1 == _ntsfile.size() && _ntsfile[i] == ".links:"))
            throw(nts::NtsError("link not found!"));
        runLinks(i + 1);
    }

    Parser::~Parser()
    {
    }

}