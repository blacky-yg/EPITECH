/*
** EPITECH PROJECT, 2021
** Project
** File description:
** ILib
*/

#ifndef ILIB_HPP_
#define ILIB_HPP_

#include "IGame.hpp"
#include <iostream>

class IGame;

class ILib {
    public:
        virtual void init() = 0;
        virtual void run() = 0; // this function runs the game which is inside the game
        virtual void showMenu() = 0; // this function is responsible of the game selection menu
        virtual void getPlayerName() = 0; // this function is used to get player name
        virtual void setPlayerName() = 0; // this function is used to save the player in a file and maybe the high score
        virtual void setGame(IGame *game) = 0; // this function is used to put a game inside an ILib instance
        virtual bool isKeyUpPressed() = 0; // this function is used across libraries to say if KeyUP is pressed
        virtual bool isKeyDownPressed() = 0; // this function is used across libraries to say if KeyDOWN is pressed
        virtual bool isKeyLeftPressed() = 0; // this function is used across libraries to say if KeyLEFT is pressed
        virtual bool isKeyRightPressed() = 0; // this function is used across libraries to say if KeyRIGHT is pressed
        virtual bool isKeyEnterPressed() = 0; // this function is used across libraries to say if KeyENTER is pressed
        virtual void drawSimpleRectOnWindow(int x, int y) = 0; // this function is used across libraries to display a small rectangle (with color white) at a position lead by coordinate x and y
        virtual void drawRedRectOnWindow(int x, int y) = 0; // this function is used across libraries to displaay a small rectangle (with color red) at a position lead by coordinate x and y
        virtual bool isKeyLibChangedPressed() = 0;
        ~ILib() = default;
        std::string _name; // The player's name

    protected:
        std::string _libName; // the library's name
        IGame *_game ; // a game instance
        std::string _menulist[2] = {"Snake", "Pacman"};
        bool _isWindowOpen = true; // A boolean used to check if the window is open
    
    private:
};


#endif /* !ILIB_HPP_ */
