/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** Core
*/

#ifndef CORE_HPP
#define CORE_HPP

#include "header.hpp"
#include "CoreException.hpp"
#include "DLLoader.hpp"
#include "IGame.hpp"
#include "ILib.hpp"
#include <iostream>
#include <vector>
#include <unordered_map>

class Core {
    public:
        Core(const std::string &);
        ~Core();
        void init(void);
        void run(void);

    protected:
    private:
        ILib *_currentLib;
        IGame *_currentGame;
};

#endif /* !CORE_HPP */