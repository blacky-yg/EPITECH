/*
** EPITECH PROJECT, 2021
** nanotekspice
** File description:
** main
*/

#include "../Include/Nanotekspice.hpp"

int main(int ac, char **av)
{
    nts::Circuit circuit;
    if (ac != 2)
    {
        std::cerr << "Not enough arguments" << std::endl;
        return (84);
    }
    try
    {
        nts::Parser parse(&circuit, (std::string)av[1]);
        //parse.dump();
        parse.run();
        nts::CmdLine cmd(parse, &circuit);
        cmd.run();
    }
    catch (nts::NtsError &e)
    {
        std::cerr << "Nts Error : " << e.what() << std::endl;
        exit(84);
    }
    return (0);
}
