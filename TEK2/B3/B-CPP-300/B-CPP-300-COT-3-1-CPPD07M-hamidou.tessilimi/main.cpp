/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** main
*/

#include "Federation.hpp"
#include "Borg.hpp"
#include "WarpSystem.hpp"

int main(void)
{
    // Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    // Federation::Ship Independent(150, 230, "Greok");
    // Federation::Ship Independent(150, 230, "Greok");
    // WarpSystem::QuantumReactor QR;
    // WarpSystem::QuantumReactor QR2;
    // WarpSystem::Core core(&QR);
    // WarpSystem::Core core2(&QR2);
    // UssKreog.setupCore(&core);
    // UssKreog.checkCore();
    // Independent.setupCore(&core2);
    // Independent.checkCore();
    // QR.setStability(false);
    // QR2.setStability(false);
    // UssKreog.checkCore();
    // Independent.checkCore();
    // return (0);

    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog" ,6);
    Federation::Starfleet::Captain James("James T. Kirk");
    Federation::Starfleet::Ensign Ensign("Pavel Chekov");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    UssKreog.promote(&James);
    Borg::Ship Cube;
    Cube.setupCore(&core2);
    Cube.checkCore();
    return (0);
}