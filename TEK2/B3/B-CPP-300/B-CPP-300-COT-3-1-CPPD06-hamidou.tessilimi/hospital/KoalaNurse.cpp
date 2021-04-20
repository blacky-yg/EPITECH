/*
** EPITECH PROJECT, 2021
** day06
** File description:
** koalaNurse
*/

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(unsigned int id)
{
    this->id = id;
    this->is_working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string str, SickKoala *Koala)
{
    Koala->takeDrug(str);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string drugName;
    std::string koalaName;

    if (filename.find(".report") != std::string::npos) {
        koalaName = filename.substr(0, filename.find("."));
        std::ifstream file(filename);
        if (file.is_open()) {
            getline(file, drugName);
            file.close();
        }
        if (drugName != "")
            std::cout << "Nurse " << this->id << ": Kreog! Mr." << koalaName << " needs a " << drugName << "!" << std::endl;
    }
    return (drugName);
}

void KoalaNurse::timeCheck(void)
{
    if (this->is_working == false) {
        this->is_working = true;
        std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    } else {
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->is_working = false;
    }
}

unsigned int KoalaNurse::getID(void)
{
    return (this->id);
}