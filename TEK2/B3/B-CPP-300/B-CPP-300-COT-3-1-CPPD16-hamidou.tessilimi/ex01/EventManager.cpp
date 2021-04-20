/*
** EPITECH PROJECT, 2021
** day16
** File description:
** EventManager
*/

#include "EventManager.hpp"

// CANONICAL

EventManager::EventManager(): _time(0)
{
}

EventManager::~EventManager()
{
}

EventManager::EventManager(const EventManager &ref)
{
    _time = ref.getTime();
    _events = ref.getEvent();
}

EventManager &EventManager::operator=(const EventManager &ref)
{
    _time = ref.getTime();
    _events = ref.getEvent();
    return (*this);
}

// GETTERS

unsigned int EventManager::getTime(void) const
{
    return (_time);
}

std::list<Event> EventManager::getEvent(void) const
{
    return (_events);
}

// EVENTS MANAGER METHODS

bool sortEvent(const Event &e1, const Event &e2)
{
    if (e1.getTime() > e2.getTime())
        return (false);
    return (true);
}

void EventManager::addEvent(const Event &e)
{
    if (e.getTime() >= _time) {
        _events.push_back(e);
        _events.sort(sortEvent);
    }
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (std::list<Event>::iterator e = _events.begin(); e != _events.end(); e++)
        if (e->getTime() == time) {
            _events.erase(e);
            e = _events.begin();
        }
}

void EventManager::dumpEvents() const
{
    for (std::list<Event>::const_iterator e = _events.begin(); e != _events.end(); e++)
        std::cout << e->getTime() << ": " << e->getEvent() << std::endl;
}

void EventManager::dumpEventAt(unsigned int time) const
{
    for (std::list<Event>::const_iterator e = _events.begin(); e != _events.end(); e++)
        if (e->getTime() == time)
            std::cout << e->getTime() << ": " << e->getEvent() << std::endl;
}

void EventManager::addTime(unsigned int time)
{
    _time += time;
    for (; !_events.empty() && _events.front().getTime() <= _time; _events.erase(_events.begin()))
        std::cout << _events.front().getEvent() << std::endl;
}

void EventManager::addEventList(const std::list<Event> &events)
{
    for (Event e : events)
        addEvent(e);
}