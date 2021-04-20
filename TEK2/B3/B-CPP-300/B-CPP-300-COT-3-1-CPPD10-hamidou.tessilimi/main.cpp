// #include "Sorcerer.hpp"
// #include "Victim.hpp"
// #include "Peon.hpp"

// int main()
// {
//     Sorcerer robert("Robert", "the Magnificent");
//     Victim jim("Jimmy");
//     Peon joe("Joe");
//     std::cout << robert << jim << joe;
//     robert.polymorph(jim);
//     robert.polymorph(joe);
//     return 0;
// }

/*
** EPITECH PROJECT, 2021
** day10
** File description:
** main
*/

#include "AWeapon.hpp"
#include "Character.hpp"
#include "AEnemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int main()
{
    const auto preda = new Character("Predator");
    const auto prey = new RadScorpion();
    std::cout << *preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda->equip(pr);
    std::cout << *preda;
    preda->equip(pf);
    preda->attack(prey);
    std::cout << *preda;
    preda->equip(pr);
    std::cout << *preda;
    preda->attack(prey);
    std::cout << *preda;
    preda->attack (prey);
    std::cout << *preda;
}