/*
** EPITECH PROJECT, 2021
** sfml
** File description:
** manageScreen
*/

#include "my.hpp"

bool isInside(sf::Vector2f pos_sprite)
{
    sf::Vector2i pos_mous = sf::Mouse::getPosition();

    int xs = (int)(pos_mous.x);
    int ys = (int)(pos_mous.y);
    int xt = (int)(pos_sprite.x);
    int yt = (int)(pos_sprite.y);
    int xst = (int)(300);
    int yst = (int)(360);

    if (xs < xt)
        return (false);
    if (xs - 100 > xt + xst)
        return (false);
    if (ys < yt + 100)
        return (false);
    if (ys - 100 > (yt) + (yst))
        return (false);
    
    return (true);
}

Sfml::IMonitorModule *getKeyPressed(control &ctrl, screen &scr)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
        return (ctrl._monitore);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
        return (NULL);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
        return (ctrl._host);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
        return (ctrl._Os);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
        return (ctrl._Date);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
        return (ctrl._Ram);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
        return (ctrl._CPU);
    return (scr._monitor);
}

void manageScreen(control &ctrl, screen &scr)
{
    if (isInside(scr.getShape().getPosition())) {
        scr.setColor(scr.getOtherColor());
        scr._monitor = getKeyPressed(ctrl, scr);
        
    } else {
        scr.setColor(scr.getColor());
    }
    ctrl.win().draw(scr.getShape());
    if (scr._monitor)
        launchFilling(ctrl, scr);
}