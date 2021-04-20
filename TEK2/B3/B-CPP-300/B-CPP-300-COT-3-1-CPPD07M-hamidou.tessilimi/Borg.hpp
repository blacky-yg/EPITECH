/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** Borg
*/

#pragma once

#ifndef BORG_HPP
#define BORG_HPP

#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Federation.hpp"

namespace Borg {
    class Ship {
        public:
            Ship(int weaponFrequency = 20, short repair = 3);
            ~Ship();

            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            void setShield(int shield);
            int getShield();
            void setRepair(int repaire);
            short getRepair();
            void setWeaponFrequency(int frequency);
            int getWeaponFrequency();
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair();

        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home;
            int _shield;
            int _weaponFrequency;
            short _repair;
    };
}

#endif /* !BORG_HPP */