#ifndef CHECK
#define CHECK 5

#include "sfml.hpp"
#include <iostream>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class screen
{

public:
    screen(int x = 0, int y = 0);
    ~screen();
    sf::Color getColor() const;
    void setColor(sf::Color);
    sf::Color getOtherColor() const;
    void setOtherColor(sf::Color);
    sf::RectangleShape &getShape();
    void setPos(int x, int y);
    Sfml::IMonitorModule *_monitor;
    int _x;
    int _y;

private:
    /* data */ 
    sf::RectangleShape _shape;
    
    sf::Color _color;
    sf::Color _otherColor;
    
};

class screenContainer
{
private:
    /* data */
    screen *_array;
    int nbr;
public:
    screenContainer();
    ~screenContainer();
    screen &operator[](int index); 
};

class control
{
private:
    sf::VideoMode _mode;
    sf::RenderWindow _win;
    screenContainer _con;
    sf::Event _event;
    
    /* data */
public:
    Sfml::CPU *_CPU;
    Sfml::MonitorCore *_monitore;
    Sfml::UserHostName *_host;
    Sfml::OsKernel *_Os;
    Sfml::DateTime *_Date;
    Sfml::Ram *_Ram;
    control(/* args */);
    ~control();
    sf::RenderWindow &win();
    sf::Event &event();
    screenContainer &con();
};
void fillCPU(control &ctrl, screen &scr);
void fillRam(control &ctrl, screen &scr);
void fillDate(control &ctrl, screen &scr);
void fillOs(control &ctrl, screen &scr);
void manageScreen(control &ctrl, screen &scr);
void launchFilling(control &ctrl, screen &src);
void fillMonitorCore(control &ctrl, screen &scr);
void fillHost(control &ctrl, screen &scr);
#endif