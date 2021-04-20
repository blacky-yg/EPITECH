/*
** EPITECH PROJECT, 2021
** day06
** File description:
** KoalaDoctor
*/

#ifndef KOALA_DOCTOR_HPP
#define KOALA_DOCTOR_HPP

#include <iostream>
#include "SickKoala.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();

        void diagnose(SickKoala *koala);
        void timeCheck(void);
        std::string getName(void);

    private:
        std::string name;
        unsigned int is_working;
};

#endif /* !KOALA_DOCTOR_HPP */