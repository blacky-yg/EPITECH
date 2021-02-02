/*
** EPITECH PROJECT, 2021
** sfml
** File description:
** launchFilling
*/

#include "sfml.hpp"
#include "my.hpp"

void launchFilling(control &ctrl, screen &src)
{
    if (dynamic_cast<Sfml::MonitorCore *>(src._monitor))
        fillMonitorCore(ctrl, src);
    if (dynamic_cast<Sfml::UserHostName *>(src._monitor))
        fillHost(ctrl, src);
    if (dynamic_cast<Sfml::OsKernel *>(src._monitor))
        fillOs(ctrl, src);
     if (dynamic_cast<Sfml::DateTime *>(src._monitor))
        fillDate(ctrl, src);
    if (dynamic_cast<Sfml::Ram *>(src._monitor))
        fillRam(ctrl, src);
    if (dynamic_cast<Sfml::CPU *>(src._monitor))
        fillCPU(ctrl, src);
}