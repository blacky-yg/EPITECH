/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Ncurses
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <getopt.h>
#include <curses.h>
#include <iostream>
#include <ncurses.h>
#include <stdbool.h>
#include <dirent.h>
#include <time.h>
#include <unistd.h>
#include <fstream>
#include "../../../include/ILib.hpp"
#include "../../../include/Utils.hpp"

class LibNcurses : public ILib
{
private:
    
    void colored();
    int _choice;
public:
    LibNcurses();
    ~LibNcurses();
    void init() override;
    void run() override;
    void showMenu() override;
    void setGame(IGame *game) override;
    void drawSimpleRectOnWindow(int x, int y) override;
    void drawRedRectOnWindow(int x, int y) override;
    bool isKeyDownPressed() override;
    bool isKeyLeftPressed() override;
    bool isKeyRightPressed() override;
    bool isKeyUpPressed() override;
    bool isKeyEnterPressed() override;
    bool isKeyLibChangedPressed() override;
    void getPlayerName() override;
    void setPlayerName() override;
};

#endif /* !NCURSES_HPP_ */
