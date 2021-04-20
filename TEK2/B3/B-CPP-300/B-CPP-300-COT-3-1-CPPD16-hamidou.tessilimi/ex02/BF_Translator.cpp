/*
** EPITECH PROJECT, 2021
** day16
** File description:
** BF_Translator
*/

#include "BF_Translator.hpp"

BF_Translator::BF_Translator()
{
    _map.insert({'+', "++ptr"});
    _map.insert({'-', "--ptr"});
    _map.insert({'>', "++*ptr"});
    _map.insert({'<', "--*ptr"});
    _map.insert({'.', "write(1, ptr, 1);"});
    _map.insert({',', "read(0, ptr, 1);"});
    _map.insert({'[', "while (*ptr) {"});
    _map.insert({']', "}"});
}

BF_Translator::~BF_Translator()
{
}

static bool is_cmd(char c)
{
    if (c == '>' || c == '<' || c == '+' || c == '-' || c == '.' || c == ',' || c == '[' || c == ']')
        return (true);
    return (false);
}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::string line;
    std::ifstream _in(in);
    std::ofstream _out(out);
    const std::string c_start_program = "#include <stdio.h>\n#include <unistd.h>\nint main(void) {\nchar tab[60000] = {0};\nchar *ptr = tab;\n";
    const std::string c_end_program = "return (0);\n}";

    if (_in.is_open() == 0 || _out.is_open() == 0)
        return (-1);
    _out << c_start_program;
    while (getline(_in, line))
        for (char c : line)
            if (is_cmd(c))
                _out << _map[c] << std::endl;
    _out << c_end_program;
    return (0);
}