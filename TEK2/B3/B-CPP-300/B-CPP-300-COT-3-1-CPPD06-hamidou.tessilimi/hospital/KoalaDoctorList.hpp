/*
** EPITECH PROJECT, 2021
** day06
** File description:
** KoalaDoctorList
*/

#ifndef KOALADOCTORLIST_HPP
#define KOALADOCTORLIST_HPP

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
    public:
        KoalaDoctorList(KoalaDoctor *Doctor = NULL);
        ~KoalaDoctorList();

        bool isEnd();
        void append(KoalaDoctorList *List);
        KoalaDoctor *getFromName(std::string name);
        KoalaDoctorList *remove(KoalaDoctorList *List);
        KoalaDoctorList *removeFromName(std::string name);
        void dump(void);

    private:
};

#endif /* !KOALADOCTORLIST_HPP */