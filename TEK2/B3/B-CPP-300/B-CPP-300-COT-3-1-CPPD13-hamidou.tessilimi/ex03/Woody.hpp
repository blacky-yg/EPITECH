/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Woody
*/

#ifndef WOODY_HPP
#define WOODY_HPP

#include "Toy.hpp"

class Woody : public Toy {
    public:
        Woody(const std::string &name, const std::string &filename = "woody.txt");
        ~Woody();

        void speak(const std::string statement);

    protected:
    private:
};

#endif /* !WOODY_HPP */