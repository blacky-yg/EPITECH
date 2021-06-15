/*
** EPITECH PROJECT, 2021
** Project
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <iostream>
#include "ILib.hpp"

class ILib;

//TODO: Regarde ici
class IGame {
    public:
        ~IGame() = default;
        virtual void play() = 0;
        virtual void eventManager() = 0;
        virtual void display() = 0;
        virtual void setLib(ILib *lib) = 0;    
        virtual std::string getGameName() = 0;
        
    protected:
        std::string _nameGame;
        ILib *_graphicLib;
    private:
};

#endif /* !IGAME_HPP_ */
