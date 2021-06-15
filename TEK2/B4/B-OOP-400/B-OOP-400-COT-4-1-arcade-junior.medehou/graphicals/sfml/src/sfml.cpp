/*
** EPITECH PROJECT, 2021
** Project
** File description:
** sfml
*/
#include "../include/sfml.hpp"
#include "../../../include/CoreException.hpp"

LibSFML::LibSFML()
{
    this->_libName = "sfml";
}

void LibSFML::init()
{
   this->_window.create(VideoMode(this->_w,this->_h),this->_game->getGameName());
   this->_window.setTitle(this->_game->getGameName());
   this->_obsRect.setSize(Vector2f(20, 20));
   this->_obsRect.setFillColor(Color::Red);
   this->_snakeRect.setSize(Vector2f(20, 20));
   this->_snakeRect.setFillColor(Color::White);
}

void LibSFML::setGame(IGame *game)
{
    this->_game = game;
}

void LibSFML::drawSimpleRectOnWindow(int x, int y)
{
   this->_obsRect.setPosition(x, y);
   this->_window.draw(this->_obsRect);    
}

void LibSFML::drawRedRectOnWindow(int x, int y)
{
   this->_snakeRect.setPosition(x, y);
   this->_window.draw(this->_snakeRect);
}

bool LibSFML::isKeyDownPressed()
{
    return Keyboard::isKeyPressed(Keyboard::Down);
}

bool LibSFML::isKeyLeftPressed()
{
    return Keyboard::isKeyPressed(Keyboard::Left);
}

bool LibSFML::isKeyUpPressed()
{
    return Keyboard::isKeyPressed(Keyboard::Up);
}

bool LibSFML::isKeyRightPressed()
{
    return Keyboard::isKeyPressed(Keyboard::Right);
}

bool LibSFML::isKeyEnterPressed()
{
    return Keyboard::isKeyPressed(Keyboard::Enter);
}

bool LibSFML::isKeyLibChangedPressed()
{
    return Keyboard::isKeyPressed(Keyboard::BackSpace);
}


void LibSFML::showMenu()
{
    Font font;
    Text text;
    Text snake;
    Text pacman;
    int fontSize = 50;
    int textPosY = 100;

    font.loadFromFile("./graphicals/sfml/ressources/fonts/arial.ttf");

    text.setFont(font);
    pacman.setFont(font);
    snake.setFont(font);

    text.setString("ARCADE");
    snake.setString("Snake");
    pacman.setString("Pacman");

    text.setStyle(Text::Bold);

    text.setCharacterSize(fontSize);
    snake.setCharacterSize(fontSize / 2);
    pacman.setCharacterSize(fontSize / 2);

    text.setPosition(Vector2f((this->_h / 2) , textPosY));
    
    snake.setPosition(Vector2f((this->_h / 2) + 50 , textPosY + fontSize * (2)));
    pacman.setPosition(Vector2f((this->_h / 2) + 50, textPosY + fontSize * (3)));

    this->_window.draw(text);
    this->_window.draw(pacman);
    this->_window.draw(snake);
}

void LibSFML::run()
{   
    while (this->_window.isOpen())
    {
       this->_window.clear(Color::Black);
        while (this->_window.pollEvent(this->_event)) {
            if (this->_event.type == Event::Closed 
                || Keyboard::isKeyPressed(Keyboard::Escape))
               this->_window.close();
        }
        if (this->isKeyEnterPressed())
            this->_isMenuShow = false;
        if (this->_isMenuShow)
            this->showMenu();
        else
            this->_game->play();
        this->_window.display();
    }
}

void LibSFML::getPlayerName()
{

}

void LibSFML::setPlayerName()
{

}

LibSFML::~LibSFML()
{
}

extern "C"
{
    LibSFML *loadLib() {
        return new LibSFML();
    }   
}
