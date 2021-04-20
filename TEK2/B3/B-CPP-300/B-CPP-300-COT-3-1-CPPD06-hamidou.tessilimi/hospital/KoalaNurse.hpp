/*
** EPITECH PROJECT, 2021
** day06
** File description:
** KoalaNurse
*/

#ifndef KOALANURSE_H
#define KOALANURSE_H

#include "SickKoala.hpp"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iomanip>
#include <regex>

class KoalaNurse {
    public:
        KoalaNurse(unsigned int id);
        ~KoalaNurse();

        void giveDrug(std::string str, SickKoala *Koala);
        std::string readReport(std::string filename);
        void timeCheck(void);
        unsigned int getID(void);

    private:
        unsigned int id;
        bool is_working;
};

#endif /* !KOALANURSE_H */