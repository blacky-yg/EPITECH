/*
** EPITECH PROJECT, 2021
** sfml
** File description:
** fillMonitorCore
*/

#include "sfml.hpp"
#include "my.hpp"

void fillCPU(control &ctrl, screen &scr)
{
    Sfml::CPU *host = dynamic_cast<Sfml::CPU *>(scr._monitor);

    host->refreshData();

    int y = 100;
    for (int i = 0; i < 4; i++, y += 27) {
        host->_text2[i + 1].setPosition(scr._x + 10, scr._y + 10 + y);
        host->_text[i].setPosition(scr._x + 100, scr._y + 10 + y);
        ctrl.win().draw(host->_text[i]);
        ctrl.win().draw(host->_text2[i + 1]);
    }
    ctrl.win().draw(host->_text2[4]);
    host->_text[0].setPosition(scr._x + 10, scr._y + 10);
    host->_text2[0].setPosition(scr._x + 10, scr._y + 10);
    ctrl.win().draw(host->_text2[0]);
}

void fillRam(control &ctrl, screen &scr)
{
    Sfml::Ram *host = dynamic_cast<Sfml::Ram *>(scr._monitor);

    host->refreshData();

    int y = 100;
    for (int i = 0; i < 7; i++, y += 27) {
        host->_text1[i].setPosition(scr._x + 10, scr._y + 10 + y);
        host->_text2[i].setPosition(scr._x + 100, scr._y + 10 + y);
        ctrl.win().draw(host->_text2[i]);
        ctrl.win().draw(host->_text1[i]);
    }
    host->_text1[0].setPosition(scr._x + 10, scr._y + 10);
    host->_text1[7].setPosition(scr._x + 10, scr._y + 10);
    ctrl.win().draw(host->_text1[7]);
}

void fillDate(control &ctrl, screen &scr)
{
    Sfml::DateTime *host = dynamic_cast<Sfml::DateTime *>(scr._monitor);

    host->refreshData();

    int y = 100;
    for (int i = 0; i < 2; i++, y += 27) {
        host->_text[i].setPosition(scr._x + 10, scr._y + 10 + y);
        ctrl.win().draw(host->_text[i]);
    }
    host->_text[0].setPosition(scr._x + 10, scr._y + 10);
}

void fillOs(control &ctrl, screen &scr)
{
    Sfml::OsKernel *host = dynamic_cast<Sfml::OsKernel *>(scr._monitor);

    host->refreshData();

    int y = 100;
    for (int i = 0; i < 4; i++, y += 27) {
        host->_text[i].setPosition(scr._x + 10, scr._y + 10 + y);
        ctrl.win().draw(host->_text[i]);
    }
    host->_text[0].setPosition(scr._x + 10, scr._y + 10);
}


void fillHost(control &ctrl, screen &scr)
{
    Sfml::UserHostName *host = dynamic_cast<Sfml::UserHostName *>(scr._monitor);

    host->refreshData();

    int y = 100;
    for (int i = 0; i < 4; i++, y += 27) {
        host->_text[i].setPosition(scr._x + 10, scr._y + 10 + y);
        ctrl.win().draw(host->_text[i]);
    }
    host->_text[0].setPosition(scr._x + 10, scr._y + 10);
}

void fillMonitorCore(control &ctrl, screen &scr)
{
    Sfml::MonitorCore *monitor = dynamic_cast<Sfml::MonitorCore *> (scr._monitor);

    monitor->refreshData();
    //sf::Font font;
    //sf::Text text;
    int y = 100;
    
    //font.loadFromFile("./font3.ttf");
    
    for (int i = 1; i < 4; i++, y += 27) {
        //monitor->_text[i].setFont(font);
//        monitor->_text[i].setCharacterSize(10);
        monitor->_text[i].setPosition(scr._x + 10, scr._y + 10 + y);
        //if (i == 0)
        //    monitor->_text[0].setPosition(scr._x + 10, scr._y + 10);
        ctrl.win().draw(monitor->_text[i]);
    }
    monitor->_text[0].setPosition(scr._x + 10, scr._y + 10);
    ctrl.win().draw(monitor->_text[0]);
    /*text.setString("Monitore Core");
    text.setFont(font);
    text.setCharacterSize(10);
    text.setPosition(scr._x + 10, scr._y + 10);
    text.setFillColor(sf::Color(sf::Color::Red));
    ctrl.win().draw(text);
    text.setString(monitor->getData());
    text.setFillColor(sf::Color(sf::Color::White));
    text.setPosition(scr._x + 10, scr._y + 60);
    ctrl.win().draw(text);
    */
}