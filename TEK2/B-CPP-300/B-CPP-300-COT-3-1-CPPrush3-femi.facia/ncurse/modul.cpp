/*
** EPITECH PROJECT, 2021
** modul.cpp
** File description:
** ert
*/

#include "ncurses.hpp"
#include "getData.hpp"
#include <vector>

std::vector<std::string> getCPU()
{
    std::vector<std::string> informations;
    std::ifstream stat("/proc/cpuinfo");
    std::string line;
    std::size_t pos;
    std::ostringstream stream;

    if (stat.is_open()) {
        while (getline(stat, line)) {
            if (line.find("model		:") !=std::string::npos) {
                pos = line.find(":") + 2;
                informations.push_back(line.substr(pos));
            } else if (line.find("cpu MHz		:") != std::string::npos) {
                pos = line.find(":") + 2;
                informations.push_back(line.substr(pos));
            } else if (line.find("cpu cores	:") != std::string::npos) {
                pos = line.find(":") + 2;
                informations.push_back(line.substr(pos));
            } else if (line.find("core id		:") != std::string::npos) {
                pos = line.find(":") + 2;
                informations.push_back(line.substr(pos));
            }
        }
        stat.close();
    }
    return (informations);
}