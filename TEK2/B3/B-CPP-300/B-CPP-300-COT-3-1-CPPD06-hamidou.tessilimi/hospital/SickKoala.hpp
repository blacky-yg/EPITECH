/*
** EPITECH PROJECT, 2021
** day06
** File description:
** sickkoala
*/

#ifndef SICKKOALA_H
#define SICKKOALA_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iomanip>
#include <regex>

class SickKoala {
    public:
        SickKoala(std::string name);
        ~SickKoala();

        void poke(void);
        bool takeDrug(std::string str);
        void overDrive(std::string str);
        std::string getName(void);

    private:
        std::string name;
};

#endif /* !SICKKOALA_H */