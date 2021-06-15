/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** Core
*/

#include "../include/Core.hpp"

Core::Core(const std::string &lib)
{
    DLLoader<ILib> loader(lib);
    DLLoader<IGame> loadGame("lib/arcade_nibbler.so");

    std::unordered_map<std::string, std::string> games = {
        {"snake", "arcade_nibbler.so"},
        {"pacman", "arcade_pacman.so"},
    };

    std::unordered_map<std::string, std::string> libs = {
        {"ncurses", "arcade_ncurses.so"},    
        {"sdl2", "arcade_sdl2.so"},
        {"sfml", "arcade_sfml.so"},
    };

    _currentLib = loader.getInstance("loadLib");
    _currentGame = loadGame.getInstance("loadGame");
    _currentGame->setLib(_currentLib);
    _currentLib->setGame(_currentGame);
    _currentLib->init();
    _currentLib->run();
    if (_currentLib == NULL)
        throw CoreException("No loadLib entry point in the path given");
}

Core::~Core()
{
}

void Core::run()
{

}

void Core::init(void)
{
    //DLLoader<ILib> *lib_loader = new DLLoader<ILib>();
}