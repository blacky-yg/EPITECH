/*
** EPITECH PROJECT, 2021
** day16
** File description:
** Event
*/

#ifndef EVENT_HPP
#define EVENT_HPP

#include <iostream>

class Event {
    public:
        Event() : _time(0) {};
        Event(unsigned int time, const std::string &event);
        ~Event();
        Event(const Event &ref);
        Event &operator=(const Event &ref);

        unsigned int getTime() const { return (_time); };
        const std::string &getEvent() const { return (_event); };

        void setTime(unsigned int time) { _time = time; };
        void setEvent(const std::string &event) { _event = event; };

    private:
        unsigned int _time;
        std::string _event;
};

#endif /* !EVENT_HPP */