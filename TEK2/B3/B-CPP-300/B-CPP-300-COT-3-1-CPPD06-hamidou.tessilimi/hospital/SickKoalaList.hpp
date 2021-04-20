/*
** EPITECH PROJECT, 2021
** day06
** File description:
** SickKoalaList
*/

#ifndef SICKKOALA_HPP
#define SICKKOALA_HPP

#include "SickKoala.hpp"

class SickKoalaList {
    public:
        SickKoalaList(SickKoala *kaola = NULL);
        ~SickKoalaList();

        bool isEnd();
        void append(SickKoalaList *List);
        SickKoala *getFromName(std::string name);
        SickKoalaList *remove(SickKoalaList *List);
        SickKoalaList *removeFromName(std::string name);
        SickKoalaList *getContent(void);
        SickKoalaList *getNext(void);
        void dump(void);

    private:
};

#endif /* !SICKKOALA_HPP */