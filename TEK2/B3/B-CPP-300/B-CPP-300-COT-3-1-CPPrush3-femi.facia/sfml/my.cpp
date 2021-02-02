#include "my.hpp"

void screen::setColor(sf::Color color)
{
    _shape.setOutlineColor(color);
}

sf::Color screen::getColor() const
{
    return (_color);
}

void screen::setOtherColor(sf::Color color)
{
    _otherColor = color;
}

sf::Color screen::getOtherColor() const
{
    return (_otherColor);
}


sf::RectangleShape &screen::getShape()
{
    return (_shape);
}

screen::screen(int x, int y): _shape(sf::Vector2f(x, y)), _color(sf::Color::Black)
{
    _shape.setOutlineColor(_color);
    _shape.setOutlineThickness(5);
    _shape.setSize(sf::Vector2f(350, 350));
    _shape.setFillColor(sf::Color::Black);
    _otherColor = sf::Color::Red;
    _monitor = NULL;
    _x = x;
    _y = y;
}

screen::~screen()
{
}

void screen::setPos(int x, int y)
{
    _shape.setPosition(x, y);
    _x = x;
    _y = y;  
}



screen &screenContainer::operator[](int index)
{
    return (_array[index]);
}

screenContainer::screenContainer()
{
    _array = new screen [8];
    sf::Color arr[4] = {sf::Color::Blue, sf::Color::Cyan, sf::Color::Green ,sf::Color::Magenta};
    int x = 0;
    int y = 0;

    for (int i = 0; i < 8; i++, x += 360) {
        if (x >= 1300) {
            x = 0;
            y += 360;
        }
        _array[i].setPos(x, y);
        _array[i].setOtherColor(arr[i % 4]);
    }
}


screenContainer::~screenContainer()
{
    delete [] _array;
}
sf::RenderWindow &control::win()
{
    return (_win);
}

sf::Event &control::event()
{
    return (_event);
}

screenContainer &control::con()
{
    return (_con);
}

control::control(): _mode(1300, 800, 32), _win(_mode, "Monitor")
{
    _monitore = new Sfml::MonitorCore;
    _host = new Sfml::UserHostName;
    _Os = new Sfml::OsKernel;
    _Date = new Sfml::DateTime;
    _Ram = new Sfml::Ram;
    _CPU = new Sfml::CPU;
}

control::~control()
{
    delete _monitore;
    delete _host;
    delete _Os;
    delete _Date;
    delete _Ram;
    delete _CPU;
}


