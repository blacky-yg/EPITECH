/*
** EPITECH PROJECT, 2021
** day13
** File description:
** ToyStory
*/

#ifndef TOYSTORY_HPP
#define TOYSTORY_HPP

#include "Toy.hpp"

class ToyStory {
    public:

        class tellMeAStory {
            public:
                tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy::*func1)(std::string str), Toy &toy2, bool (Toy::*func2)(std::string str));
        };

        ToyStory();
        ~ToyStory();

    protected:
    private:
};

#endif /* !TOYSTORY_HPP */