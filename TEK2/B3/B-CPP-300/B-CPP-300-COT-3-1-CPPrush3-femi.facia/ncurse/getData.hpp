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
#include <ncurses.h>
#include <string>
#include <curses.h>
#include <algorithm>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <netdb.h>
#include <iomanip>
#include <vector>

void input();
std::string *getRam();
std::string getKernel();
std::string getOs();
std::string getMonitorCore();
std::string getHostName();
std::string getUserName();
std::string getDate();
std::vector<std::string> getCPU();
std::string *splitstring(const std::string &cmd);
std::string removespaces(const std::string &cmd);
void print(WINDOW *window, int x, int y, const char *str, int color, bool);