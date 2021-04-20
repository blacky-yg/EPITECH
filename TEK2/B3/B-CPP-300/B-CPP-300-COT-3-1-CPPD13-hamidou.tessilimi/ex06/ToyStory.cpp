/*
** EPITECH PROJECT, 2021
** day13
** File description:
** ToyStory
*/

#include "ToyStory.hpp"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

ToyStory::tellMeAStory::tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy::*func1)(std::string str), Toy &toy2, bool (Toy::*func2)(std::string str))
{
    std::string line;
    std::ifstream file(filename);
    std::cout << toy1.getAscii() << std::endl;
    std::cout << toy2.getAscii() << std::endl;
    int i = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            if (i % 2 == 0)
                (toy1.*func1)(line);
            else
                (toy2.*func2)(line);
            i++;
        }
        file.close();
    } else
        std::cout << "Bad Story" << std::endl;
}