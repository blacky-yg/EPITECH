
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
    try : _api(input, output)
{
} catch (const std::exception &e) {
    std::string error = "Error: ";
    throw CommunicationError(error.append(e.what()));
}

CommunicationDevice::~CommunicationDevice()
{
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    std::string l_error = "LogicError: ";
    std::string r_error = "RuntimeError: ";
    std::string error = "Error: ";

    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);
    } catch (const std::logic_error &e) {
        throw CommunicationError(l_error.append(e.what()));
    } catch (const std::runtime_error &e) {
        throw CommunicationError(r_error.append(e.what()));
    } catch (const std::exception &e) {
        throw CommunicationError(error.append(e.what()));
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (const std::exception &e) {
        message = "INVALID MESSAGE";
        std::cerr << e.what() << std::endl;
    }
}
