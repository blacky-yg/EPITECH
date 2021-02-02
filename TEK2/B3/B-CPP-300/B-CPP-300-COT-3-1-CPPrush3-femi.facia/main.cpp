/*
** EPITECH PROJECT, 2021
** main.cpp
** File description:
** basic
*/

#include <iostream>

int main(int ac, char **av)
{
    std::string _choice;
    if (ac == 2 && av[1])
        std::system("./ncurse/ncurse -h");
    std::cout << "Choice a mode:\n1: Ncurses\n2: SFML" << std::endl;
    std::cin >> _choice;
    if (_choice == "1")
        std::system("./ncurse/ncurse");
    else if (_choice == "2")
        std::system("./sfml/sfml");
    return (0);
}
