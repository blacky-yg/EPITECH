/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "SickKoala.hpp"
#include "KoalaNurse.hpp"
#include "KoalaDoctor.hpp"

int main(void)
{
    std::cout << "Patient test" << std::endl;
    std::string Mars_drug = "Mars";
    std::string Kinder_drug = "Kinder";
    std::string Go_crazy = "Kreog! lala Kreog! Kreog ! How's it going?";
    SickKoala patient("meelo");
    /* Atfer Ex03 */    std::cout << patient.getName() << std::endl;
    patient.poke();
    patient.takeDrug(Mars_drug);
    patient.overDrive(Go_crazy);

    std::cout << std::endl << std::endl;

    std::cout << "Nurse test" << std::endl;
    KoalaNurse nurse(1);
    std::string the_drug;
    // /* Atfer Ex04 */    std::cout << nurse.getID() << std::endl;
    nurse.timeCheck();
    nurse.timeCheck();
    nurse.timeCheck();
    nurse.giveDrug("Mars", &patient);
    the_drug = nurse.readReport("meelo.report");
    std::cout << "Drug read : " << the_drug << std::endl;
    the_drug = nurse.readReport("me.report");
    std::cout << "Drug read : " << the_drug << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "Doctor test" << std::endl;
    KoalaDoctor doc("Charlie");
    // /* Atfer Ex04 */    std::cout << doc.getName() << std::endl;
    doc.timeCheck();
    doc.timeCheck();
    doc.timeCheck();
    doc.diagnose(&patient);

    return (0);
}
