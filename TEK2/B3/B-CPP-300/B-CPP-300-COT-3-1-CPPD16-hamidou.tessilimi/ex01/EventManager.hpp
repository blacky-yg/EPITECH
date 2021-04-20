/*
** EPITECH PROJECT, 2021
** day16
** File description:
** EventManager
*/

#ifndef EVENT_MANAGER_HPP
#define EVENT_MANAGER_HPP

#include "Event.hpp"
#include <list>
#include <iterator>

class EventManager {
    public:
        EventManager();
        ~EventManager();
        EventManager(const EventManager &ref);
        EventManager &operator=(const EventManager &ref);

        void addEvent(const Event &e);
        void removeEventsAt(unsigned int time);
        void dumpEvents() const;
        void dumpEventAt(unsigned int time) const;
        void addTime(unsigned int time);
        void addEventList(const std::list<Event> &events);

        unsigned int getTime(void) const;
        std::list<Event> getEvent(void) const;

    private:
        std::list<Event> _events;
        unsigned int _time;
};

#endif /* !EVENT_MANAGER_HPP */