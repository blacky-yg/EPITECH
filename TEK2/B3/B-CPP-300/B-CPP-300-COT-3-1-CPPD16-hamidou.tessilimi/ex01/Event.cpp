/*
** EPITECH PROJECT, 2021
** day16
** File description:
** Event
*/

#include "Event.hpp"

Event::Event(unsigned int time, const std::string &event): _time(time), _event(event)
{
}

Event::~Event()
{
}

Event::Event(const Event &ref)
{
    _time = ref.getTime();
    _event = ref.getEvent();
}

Event &Event::operator=(const Event &ref)
{
    _time = ref.getTime();
    _event = ref.getEvent();
    return (*this);
}