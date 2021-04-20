/*
** EPITECH PROJECT, 2021
** day16
** File description:
** DomesticKoala
*/

#ifndef DOMESTIC_KOALA_HPP
#define DOMESTIC_KOALA_HPP

#include <iostream>
#include <vector>
#include "KoalaAction.hpp"

using methodPointer_t = void (KoalaAction::*)(const std::string &str);

class DomesticKoala {
    public:
        DomesticKoala(KoalaAction &);
        ~DomesticKoala();
        DomesticKoala(const DomesticKoala &);
        DomesticKoala &operator=(const DomesticKoala &);

        const std::vector<methodPointer_t> *getActions() const;
        KoalaAction getKoalaAction() const;
        std::vector<unsigned char> getCmd() const;

        void learnAction(unsigned char command, methodPointer_t action);
        void unlearnAction(unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);


    protected:
        KoalaAction &_koala_action;
        std::vector<unsigned char> _cmd;
        std::vector<methodPointer_t> _actions;
};

#endif /* !DOMESTIC_KOALA_HPP */