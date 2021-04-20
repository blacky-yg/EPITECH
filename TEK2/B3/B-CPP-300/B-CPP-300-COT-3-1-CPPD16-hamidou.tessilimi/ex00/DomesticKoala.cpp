/*
** EPITECH PROJECT, 2021
** day16
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &action): _koala_action(action)
{
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &copy): _koala_action(copy._koala_action)
{
    _actions = copy._actions;
    _cmd = copy._cmd;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &copy)
{
    _koala_action = copy.getKoalaAction();
    _cmd = copy.getCmd();
    _actions = copy._actions;
    return (*this);
}

// GETTERS

const std::vector<methodPointer_t> *DomesticKoala::getActions() const
{
    return (&_actions);
}

KoalaAction DomesticKoala::getKoalaAction() const
{
    return (_koala_action);
}

std::vector<unsigned char> DomesticKoala::getCmd() const
{
    return (_cmd);
}

// SETTER

void DomesticKoala::setKoalaAction(KoalaAction &act)
{
    _koala_action = act;
}

// ACTIONS

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    unlearnAction(command);
    _cmd.push_back(command);
    _actions.push_back(action);
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    unsigned int i = 0;
    for (; i < _cmd.size(); i++) {
        if (_cmd[i] == command) {
            _cmd.erase(_cmd.begin() + i);
            _actions.erase(_actions.begin() + i);
        }
    }
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    unsigned int i = 0;
    methodPointer_t act = nullptr;
    for (; i < _cmd.size(); i++)
        if (_cmd[i] == command)
            act = _actions[i];
    if (act != nullptr)
        (_koala_action.*act)(param);
}