/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** Federation
*/

#ifndef FEDERATION_HPP
#define FEDERATION_HPP

#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Borg
{
    class Ship;
}

namespace Federation {
    namespace Starfleet {
        class Captain {
            public:
                Captain(std::string _name);
                ~Captain();
                std::string getName(void);
                int getAge(void);
                void setAge(int age);

            private:
                std::string _name;
                int _age;
        };

        class Ship {
            public:
                Ship();
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                ~Ship();

                void setupCore(WarpSystem::Core *core);
                void checkCore(void);
                void promote(Federation::Starfleet::Captain *captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *_core;
                Destination _location;
                Destination _home;
                int _shield;
                int _photonTorpedo;
                Federation::Starfleet::Captain *_captain;
        };

        class Ensign {
            public:
                Ensign(std::string name);
                ~Ensign();
            private:
                std::string _name;
        };
    };

    class Ship {
        public:
            Ship(int length, int width, std::string name, short maxWarp = 1);
            ~Ship();

            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            WarpSystem::Core *getCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home;
    };
};

#endif /* !FEDERATION_HPP */