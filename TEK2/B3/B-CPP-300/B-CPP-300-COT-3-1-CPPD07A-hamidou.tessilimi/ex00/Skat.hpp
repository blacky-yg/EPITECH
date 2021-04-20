/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** Skat
*/

#ifndef SKAT_HPP
#define SKAT_HPP

#include <iostream>

class Skat {
    public:
        Skat(const std::string &name = "bob", int stimPaks = 15);
        ~Skat();

        int &stimPaks();
        const std::string &name();
        void shareStimPaks(int number, int &stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();

    private:
        std::string _name;
        int _stimpaks;
};

#endif /* !SKAT_HPP */