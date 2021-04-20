/*
** EPITECH PROJECT, 2021
** day06
** File description:
** KoalaNurseList
*/

#ifndef KOALANURSELIST_HPP
#define KOALANURSELIST_HPP

#include "KoalaNurse.hpp"

class KoalaNurseList {
    public:
        KoalaNurseList(KoalaNurse *Nurse = NULL);
        ~KoalaNurseList();

        bool isEnd();
        void append(KoalaNurseList *List);
        KoalaNurse *getFromID(unsigned int id);
        KoalaNurseList *remove(KoalaNurseList *List);
        KoalaNurseList *removeFromID(unsigned int id);
        KoalaNurseList *getContent(void);
        KoalaNurseList *getNext(void);
        void dump(void);

    private:
};

#endif /* !KOALANURSELIST_HPP */