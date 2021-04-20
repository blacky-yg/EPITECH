/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Buzz
*/

#ifndef BUZZ_HPP
#define BUZZ_HPP

#include "Toy.hpp"

class Buzz : public Toy {
    public:
        Buzz(const std::string &name, const std::string &filename = "buzz.txt");
        ~Buzz();

        void speak(const std::string statement);

    protected:
    private:
};

#endif /* !BUZZ_HPP */