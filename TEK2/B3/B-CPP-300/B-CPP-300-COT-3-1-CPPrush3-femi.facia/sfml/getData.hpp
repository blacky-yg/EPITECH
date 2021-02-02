/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** getData header
*/

#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <algorithm>
#include <vector> 

std::string *getRam();
std::string getKernel();
std::string getOs();
std::string getMonitorCore();
std::string getHostName();
std::string getUserName();
std::string getDate();
std::string *splitstring(const std::string &cmd);
std::string removespaces(const std::string &cmd);
std::string *getCPU();